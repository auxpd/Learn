#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

void error_handling(char *message);

int main(int argc, char *argv[]){
	int serv_sock;
	int clnt_sock;

	struct sockaddr_in serv_addr;
	struct sockaddr_in clnt_sock;
	socklen_t clnt_addr_size;

	char message[] = "Hello World"；
	
	if(argc != 2){
		printf("Usage:%s <port>\n", argv[0]);
	}
	

}
