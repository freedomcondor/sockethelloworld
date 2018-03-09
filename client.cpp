#include "tcp_socket.h"
#include <stdio.h>

int main()
{
	TCPSocket* tcpSocket = new TCPSocket("127.0.0.1",8080);
	tcpSocket->Open();
	printf("everything is ok\n");

	char mes[200] = "hello i am a test";
	tcpSocket->Write(mes,18);

	int len;
	tcpSocket->Read(mes,&len);
	printf("%s\n%d\n",mes,len);
}
