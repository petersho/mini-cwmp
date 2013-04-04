/* udp echo client demo */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
	int sockfd;
	struct sockaddr_in srvAddr;
	char *srvIP = argv[1];
	unsigned short port = 6123;

	if(argc < 2) {
		printf("argument err!\n");
		exit(1);
	}

	if(argc > 2)
		port = atoi(argv[2]);

	bzero(&srvAddr, sizeof(srvAddr));
	srvAddr.sin_family = AF_INET;
	srvAddr.sin_port = htons(port);
	inet_pton(AF_INET, srvIP, &srvAddr.sin_addr.s_addr);
	sockfd = socket(AF_INET, SOCK_DGRAM, 0);

	if (sockfd < 0) {
		printf("Invalid socket\n");
		exit(1);
	}
	printf("ready send data to UDP server %s:%d!\n", srvIP, port);

	while (1) {
		char sendBuf[2048];
		size_t len;
		fgets(sendBuf, 2048, stdin);
		sendto(sockfd, sendBuf, strlen(sendBuf), 0, (struct sockaddr*)&srvAddr, sizeof(srvAddr));
		len = recvfrom(sockfd, sendBuf, 2048, 0, NULL, NULL);
		sendBuf[len] = '\0';
		printf("%s", sendBuf);
	}
	close(sockfd);

	return 0;
}
