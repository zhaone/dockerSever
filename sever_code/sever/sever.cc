/*
赵懿 2018/10/25
chat: sever程序
*/
#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

#include <string>
#include <cstring>
#include <iostream>

#include "Sever.h"
#include "../proto/Msg.pb.h"

using namespace std;

//线程函数
void* thread_func(void *arg)
{
	int client_sockfd= *(int*)arg;

	/*接收客户端的数据并将其发送给客户端--recv返回接收到的字节数，send返回发送的字节数*/
	int len;
	char buf[BUFSIZ];
	while((len=recv(client_sockfd,buf,BUFSIZ,0))>0)
	{
	    buf[len]='\0';
	    string info_recv(buf);
	    string info_send;

	    demo::Msg msg;
	    msg.ParseFromString(info_recv);

	    if(msg.msg_type()==demo::Msg::CTL && msg.info()=="quit")
	    {
	    	cout<<"clinet has left!"<<endl;
	    	return nullptr;
	    }
		msg.set_name("sever");
		msg.set_msg_type(demo::Msg::DATA);
		msg.set_info(to_string(msg.info().size()));
		msg.SerializeToString(&info_send);

		if(send(client_sockfd,info_send.c_str(),info_send.size(),0)<0)
		{
			cerr<<"write error"<<endl;
			return nullptr;
		}
	}
	close(client_sockfd);
	return nullptr;
}

// set the port, listen length
Sever::Sever(unsigned a_port, unsigned len):
port(a_port),listen_length(len)
{
	init();
}
Sever::~Sever(){}
// init the address, every thing before bind
bool Sever::init()
{
	/*sever address*/
	bzero(&sever_addr, sizeof(sever_addr));//数据初始化--清零
	sever_addr.sin_family=AF_INET; //设置为IP通信
	sever_addr.sin_addr.s_addr=INADDR_ANY;//服务器IP地址--允许连接到所有本地地址上
	sever_addr.sin_port=htons(port); //服务器端口号
	/*创建服务器端套接字--IPv4协议，面向连接通信，TCP协议*/
	if((server_sockfd=socket(PF_INET,SOCK_STREAM,0))<0)
	{  
		cerr<<"sever socket create error"<<endl;
		return false;
	}
	/*将套接字绑定到服务器的网络地址上*/
	if(bind(server_sockfd,(sa*)&sever_addr,sizeof(sa))<0)
	{
		cerr<<"sever socket bind error"<<endl;
		return false;
	}
	return true;
}
// work listen. connect, accept
bool Sever::work(){
	// listen
	if(listen(server_sockfd,listen_length)<0)
	{
		perror("listen error");
		return false;
	};
	printf("waiting client...\n");
	// accept
	socklen_t sai_len=sizeof(sai);
	while(true)
	{
		sai client_addr;
		int client_sockfd;
		char cip[INET_ADDRSTRLEN] = "";	   // 用于保存客户端IP地址
		//accept
		if((client_sockfd=accept(server_sockfd, (sa*)&client_addr, &sai_len))<0)
		{
			cerr<<"accept error"<<endl;
			continue;
		}
		inet_ntop(AF_INET, &client_addr.sin_addr, cip, INET_ADDRSTRLEN);  
		cout<<"----------------------------------------------"<<endl;
		cout<<"client connect successfully!"<<endl;
		cout<<"remote ip="<<string(cip)<<",port="<<ntohs(client_addr.sin_port)<<endl;
		//printf("remote ip=%s,port=%d\n", cip, ntohs(client_addr.sin_port));

		//发送欢迎信息
		demo::Msg wel;
		wel.set_name("server");
		wel.set_msg_type(demo::Msg::CTL);
		wel.set_info("wel");
		string wel_send;
		wel.SerializeToString(&wel_send);
		send(client_sockfd, wel_send.c_str(), wel_send.size(), 0);

		// thread func
		pthread_t thread_id;
		void*(*func)(void*)=&thread_func;
		if(pthread_create(&thread_id, NULL, func, (void *)&client_sockfd)<0)
		{
			perror("thread create error\n");
			continue;
		}
	}
	close(server_sockfd);
}
