#ifndef _DEF_CLIENT_H_
#define _DEF_CLIENT_H_

#include <netinet/in.h>
#include <stdio.h>
#include <string>

class Client{
	typedef struct sockaddr_in sai;
	typedef struct sockaddr sa;
public:
	Client(std::string a_sever_ip="127.0.0.1", int a_sever_port=8888);
	~Client();

	bool my_connect();
	void request(bool exit=false);
private:
	bool init();

	int client_sockfd;
	std::string sever_ip;
	int sever_port;
	sai sever_addr; //服务器端网络地址结构体
	char buf[BUFSIZ];  //数据传送的缓冲区
};
#endif