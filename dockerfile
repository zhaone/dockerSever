FROM ubuntu:16.04

RUN apt-get update \
# install basic tools
&& apt-get install -y wget\
&& apt-get install -y build-essential \
&& apt-get install -y pkg-config zip g++ zlib1g-dev unzip python \
&& apt-get install -y autoconf automake libtool curl make 

# install protobuf
ADD protobuf.tar.gz /usr/

RUN cp -r /usr/protobuf/include/google /usr/include/ \
&& echo 'export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/protobuf/lib' >> ~/.bashrc \
&& echo 'export LIBRARY_PATH=$LIBRARY_PATH:/usr/protobuf/lib' >> ~/.bashrc \
&& echo 'export PATH=$PATH:/usr/protobuf/bin' >> ~/.bashrc \

# install bazel
&& mkdir instBazelTmp 

COPY bazel-0.18.0-installer-linux-x86_64.sh ./instBazelTmp/
RUN cd instBazelTmp \
&& chmod +x bazel-0.18.0-installer-linux-x86_64.sh \
&& ./bazel-0.18.0-installer-linux-x86_64.sh --user \
&& echo PATH="$PATH:$HOME/bin">>~/.bashrc \
&& cd .. \

# compile
&& mkdir compile

ADD sever_code.tar.gz ./compile/

RUN cd ./compile/sever_code/ \
&& ~/bin/bazel build //sever:sever_main \
&& ldconfig \
&& cp /compile/sever_code/bazel-bin/sever/sever_main /
# setup
CMD /sever_main
