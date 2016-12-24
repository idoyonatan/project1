#ifndef Client_H
#define Client_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream> 
#include <arpa/inet.h>
#include "Communicate.h"
using namespace std;
class Client: public Communicate{
	public:
		Client(int port, string ip);
		~Client();
};
#endif
