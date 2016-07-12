#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>

int main()
{
	int sock;
	sock = socket(AF_INET, SOCK_STREAM, 0);
	
	struct sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = INADDR_ANY;
	addr.sin_port = htons(3001);
	
	bind(sock, (struct sock_addr *) &addr, sizeof(addr));
	
	listen(sock, 5);
	
	int connection;
	char buffer[256] = {0};	/* initialized to zero, to make sure it starts empty */
	
	connection = accept(sock, NULL, NULL);
	read(connection, buffer, 255);
	printf("client sent the info: %s\n", buffer);
	return 0;
}