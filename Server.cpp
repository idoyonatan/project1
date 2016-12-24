#include "Server.h"
Server::Server(int port)
{
	socklen_t clilen;
	struct sockaddr_in serv_addr, cli_addr;
	Socket = socket(AF_INET, SOCK_STREAM,0);	
	bzero((char*)& serv_addr, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = INADDR_ANY;
	serv_addr.sin_port = htons(port);
	bind(socket, (struct sockaddr*) &serv_addr, sizeof(serv_addr));
	listen(Socket, 5);
	clilen = sizeof(cli_addr);
	soc = accept(socket,(struct sockaddr *) & cli_addr, &clilen);
}
Server::~Server()
{
	close(Socket);
	close(soc);
}
