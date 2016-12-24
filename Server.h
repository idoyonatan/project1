#ifndef SERVER_H
#define SERVER_H
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include "Communicate.h"
using namespace std;
class Server: public Communicate{
	public:
		 Server(int port);
		 ~Server();
	private:
		int Socket;
};
#endif
