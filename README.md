# dockerSever
## 文件结构
```cpp
.
├── bazel-0.18.0-installer-linux-x86_64.sh //https://github.com/bazelbuild/bazel/releases/download/0.18.0/bazel-0.18.0-installer-linux-x86_64.sh
├── client_code				//客户端代码（新）
│   ├── client
│   │   ├── BUILD
│   │   ├── client.cc
│   │   ├── Client.h
│   │   └── client_main.cc
│   ├── proto
│   │   ├── BUILD
│   │   ├── Msg.pb.cc
│   │   ├── Msg.pb.h
│   │   └── Msg.proto
│   ├── protobuf.BUILD
│   └── WORKSPACE
├── client_code_可用			//客户端代码（旧，实际使用）
│   ├── client.cc
│   ├── Client.h
│   ├── client_main-------------------->客户端程序，运行
│   └── client_main.cc
├── dockerfile------------------------->dockerfile
├── img
│   ├── err1.png
│   ├── err2.png
│   └── run.png
├── protobuf.tar.gz			//就是protobuf编译之后的bin inlude 和 lib文件夹的打包
├── README.md
├── sever_code				//服务器代码
│   ├── proto
│   │   ├── BUILD
│   │   ├── Msg.pb.cc
│   │   ├── Msg.pb.h
│   │   ├── Msg.pb.o
│   │   └── Msg.proto
│   ├── protobuf.BUILD
│   ├── sever
│   │   ├── BUILD
│   │   ├── sever.cc
│   │   ├── Sever.h
│   │   └── sever_main.cc
│   └── WORKSPACE-------------------->WORKSPACE文件
└── sever_code.tar.gz			//服务器代码，提交到docker编译
```
## 程序功能
较简单，将sever的代码在docker容器内编译部署；本机运行client_main，输入字符串，服务器统计字符串个数并返回给client（多线程，可以同时打开多个client）:
![image](https://github.com/zhaone/dockerSever/blob/master/img/run.png)
## 运行环境
- 操作系统：ubuntu16.04
- docker基础镜像：ubuntu:16.04
##运行方法
> bazel-0.18.0-installer-linux-x86_64.sh 和 protobuf.tar.gz我这边直接docker用网址非常慢，所以是下载下来传上去的。但是超过了50M，github没法psuh上来。
1. 首先在根目录下执行```docker build -t ubuntu:sever -f dockerfile .```，该命令在docker中构建编译环境(基本工具、bazel、protobuf)，然后bazel编译得到sever_main程序
2. 继续执行```docker run -it -p 8888:8888 ubuntu:sever bash```，然后在docker Ubuntu容器的命令行中执行'```/sever_main```，启动sever程序
3. 启动 client\_code\_可用 中的client_mian，开始通信

## 问题
1. 是新版的client代码，client\_code\_可用 是老版的client代码。今天两个代码编译的时候都成功，但是运行都报下面的错误，我还没找到什么原因。拿了以前的一个可以工作的client_main（老版的client代码编译的）来使用（同样的编译方式和代码，以前的没报错不知道为啥...）
![image](https://github.com/zhaone/dockerSever/blob/master/img/err1.png)
2.docker服务器启动时，如果在dockerfile里面用```CMD /sever_main```，或者```docker run -it -p 8888:8888 ubuntu:sever /sever_main```启动，都会出现以下错误，我还不知道怎么解决
![image](https://github.com/zhaone/dockerSever/blob/master/img/err2.png)

> 赵懿 yizhaome@gmail.com
