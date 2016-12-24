#include "Communicate.h"
#include "Server.h"
#include "Client.h"
using namespace std;
#define PORT 4949
#define IP "192.168.0.101"
int main()
{
	/*string ans;
	cout << "host or client?: " << endl;
	cin >> ans;
	if(ans == "host")
		Server usr(PORT);
	else
		Client usr(PORT, IP);*/
	Server tmp(PORT);
	tmp.sendData("hello");
	return 0;
}

