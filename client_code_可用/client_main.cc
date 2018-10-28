#include "Client.h"

#include <signal.h>
#include <unistd.h>

Client c;

void handler(int signum) 
{ 
	if(signum == SIGINT)
		c.request(true);
	return;
}

int main(){
	signal(SIGINT, handler);
	c=Client("127.0.0.1",8888);
	c.my_connect();
	c.request();
	return 0;
}