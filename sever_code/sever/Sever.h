#ifndef _DEF_SEVER_H_
#define _DEF_SEVER_H_
#include <netinet/in.h>
class Sever{
	typedef struct sockaddr_in sai;
	typedef struct sockaddr sa;
public:
	// set the port, listen length
	Sever(unsigned a_port=8888, unsigned len=5);
	~Sever();
	// work listen. connect, accept
	bool work();
private:
	// init the address, every thing before bind
	bool init();

	sai sever_addr;
	unsigned port;
	unsigned listen_length;
	int server_sockfd;
};
#endif