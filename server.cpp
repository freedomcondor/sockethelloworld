#include "tcp_socket.h"
#include <stdio.h>

int main()
{
	TCPSocket* tcpSocket = new TCPSocket("server",8080);
	tcpSocket->Open();
	printf("everything is ok\n");

	char mes[200];
	int len;
	tcpSocket->Read(mes,&len);
	printf("%s\n%d\n",mes,len);

	tcpSocket->Write("I am lalal",11);
}
