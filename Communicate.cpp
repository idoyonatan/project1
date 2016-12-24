void Communicate::sendData(string data)
{
	send(soc, data.c_str(), data.length(), 0);
}
string Communicate::reciveData()
{
	char buffer[256];
	recv(soc, buffer, 256, 0);
	return string(buffer);
}
