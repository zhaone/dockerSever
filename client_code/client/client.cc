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

#include "Client.h"
#include "../proto/Msg.pb.h"

using namespace std;

Client::Client(std::string a_sever_ip, int a_sever_port):
	sever_ip(a_sever_ip), sever_port(a_sever_port)
{
		init();
}
Client::~Client(){}

bool Client::init()
{
	bzero(&sever_addr, sizeof(sever_addr)); //数据初始化--清零
	sever_addr.sin_family=AF_INET; //设置为IP通信
	sever_addr.sin_addr.s_addr=inet_addr(sever_ip.c_str());//服务器IP地址
	sever_addr.sin_port=htons(sever_port); //服务器端口号
	
	/*创建客户端套接字--IPv4协议，面向连接通信，TCP协议*/
	if((client_sockfd=socket(PF_INET,SOCK_STREAM,0))<0)
	{
		cerr<<"socket error"<<endl;
		return false;
	}
	return true;
}

bool Client::my_connect()
{
	/*将套接字绑定到服务器的网络地址上*/
	if(connect(client_sockfd, (sa*)&sever_addr, sizeof(sa))<0)
	{
		cerr<<"connect error"<<endl;
		return false;
	}
	//欢迎信息
	int len=recv(client_sockfd,buf,BUFSIZ,0);//接收服务器端信息
    buf[len]='\0';
    string wel_recv(buf);
    demo::Msg rwel;
    rwel.ParseFromString(wel_recv);
    if(rwel.msg_type()==demo::Msg::CTL && rwel.info()=="wel")
		cout<<"sever welcome you!"<<endl;
	return true;
}

void Client::request(bool exit)
{
	demo::Msg msg;
	string info_send;

	if(exit)
	{
		msg.set_name("client");
		msg.set_msg_type(demo::Msg::CTL);
		msg.set_info("quit");
		msg.SerializeToString(&info_send);

		send(client_sockfd,info_send.c_str(),info_send.size(),0);
		return;
	}
	/*循环的发送接收信息并打印接收信息（可以按需发送）--recv返回接收到的字节数，send返回发送的字节数*/
	while(true)
	{
		cout<<"Enter string to send:"<<endl;
		getline(cin,info_send);

		msg.set_name("client");
		msg.set_msg_type(demo::Msg::DATA);
		msg.set_info(info_send);
		msg.SerializeToString(&info_send);

		send(client_sockfd,info_send.c_str(),info_send.size(),0);

		int len=recv(client_sockfd,buf,BUFSIZ,0);
		buf[len]='\0';
		string info_recv(buf);
		msg.ParseFromString(info_recv);
		cout<<"sever: your input has "<<msg.info()<<"letter(s)"<<endl;
	}
	close(client_sockfd);
}

