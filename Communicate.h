#ifndef COMMUNICATE_H
#define COMMUNICATE_H
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
using namespace std;
class Communicate{
	public:
		void sendData(string data);
		string reciveData();
		
	protected:
		int soc;
};



#endif
