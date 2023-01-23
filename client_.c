#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h> //used in sin_family,sin_port,sin_addr
#include<arpa/inet.h> //the available the types in_port_t and type in_addr_t as defined


#define PORT 4455

int main()
{
	int clientSocket;
	struct sockaddr_in serverAddr;
	char buffer[1024];
	int i;

	//socket - create an endpoint for communication
	clientSocket=socket(PF_INET, SOCK_STREAM, 0);
	printf("[+] client Socket Created Sucessfully\n");

	memset(&serverAddr,'\0',sizeof(serverAddr));
	
	serverAddr.sin_family=AF_INET;
	
	//htons is convert values between host and network byte order
	serverAddr.sin_port=htons(PORT);

	serverAddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	 
	//connect - initiate a connection on a socket

	connect(clientSocket,(struct sockaddr*)&serverAddr, sizeof(serverAddr));
	 printf("[+]Connected to the server\n");

	// receive a message from a socket
	
	recv(clientSocket,buffer,1024,0);
	{

		for (i = 0; buffer[i]!='\0'; i++)
	
      		if(buffer[i] >= 'a' && buffer[i] <= 'z')
	       	{
        	 buffer[i] = buffer[i] - 32;
     
	       	}
	
	 printf("[+]Data received : %s\n",buffer);
	}
	printf("[+]closing the connection\n");
}
