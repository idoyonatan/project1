#include "Client.h"
using namespace std;

Client::Client(int port, string ip)
{
	struct sockaddr_in server;
	soc = socket(AF_INET, SOCK_STREAM,0);
	server.sin_addr.s_addr = inet_addr(ip.c_str());
	server.sin_family = AF_INET;
	server.sin_port = htons(port);
	connect(soc, (struct sockaddr*)&server, sizeof(server));
}
Client::~Client()
{

}

