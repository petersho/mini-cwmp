#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <getopt.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <ctype.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <tr-069-1-0-0.h>
#include <cwmp-datamodel.h>

/* #define PIDFILE "/var/run/cwmp-datamodel.pid" */
#define PIDFILE "/tmp/cwmp-datamodel.pid"
#define SERVER_PORT	6123

static char *usage_message = "\n\
cwmp-datamodel - TR-069 cwmp data model program\n\
usage: datamodel [options]\n\
	-a, --setparametervalues\n\
		SetParameterValues RPC.\n\
	-b, --getparametervalues\n\
		GetParameterValues RPC.\n\
	-c, --getparameternames\n\
		GetParameterNames RPC.\n\
	-d, --setparameterattributes\n\
		SetParameterAttributes RPC.\n\
	-e, --getparameterattributes\n\
		GetParameterAttributes RPC.\n\
	-f, --addobject\n\
		AddObject RPC\n\
	-g, --deleteobject\n\
		DeleteObject RPC\n\
	-h, --help\n\
		Print out a short help message and exit.\n\
	-j, --getrpcmethods\n\
		GetRPCMethods RPC\n\
	-s, --socket\n\
		UDP socket mode\n";

int cwmp_dm_SetParameterValues()
{
	return 0;
}

int cwmp_dm_GetParameterValues()
{
	return 0;
}

int cwmp_dm_GetParameterNames()
{
	struct object_datamodel *current = NULL;

	int indx = 0;

		current = (struct object_datamodel *)
				malloc(sizeof(struct object_datamodel));

		if (current == NULL) {
			printf("Error!!!\n");
			return 1;
		}

		printf(" Xcurrent = %d, Xcurrent = %d \n",current->index[0] ,current->index[1]);

		indx = check_parameter(current);

		if (indx == -1) {
			printf("Error!!!\n");
		}
		printf(" current = %d, current = %d \n",current->index[0] ,current->index[1]);

		(current->Func)(current);
		printf("=================\n");

	return 0;
}

int cwmp_dm_SetParameterAttributes()
{
	return 0;
}

int cwmp_dm_GetParameterAttributes()
{
	return 0;
}

int cwmp_dm_AddObject()
{
	return 0;
}

int cwmp_dm_DeleteObject()
{
	return 0;
}

int cwmp_dm_GetRPCMethods()
{
	return 0;
}

void help(void)
{
	puts(usage_message);
}

int socket_server()
{
	int sockfd = 0;
	struct sockaddr_in bindAddr;
	unsigned short port = SERVER_PORT;
	char recvBuf[2048];
	char cliIP[INET_ADDRSTRLEN];
	size_t recvLen = 0;
	struct sockaddr_in cliAddr;
	size_t cliAddrLen = sizeof(cliAddr);

	printf("UDP Server Started at port 6123\n");
	sockfd = socket(AF_INET, SOCK_DGRAM, 0);

	if (sockfd < 0) {
		printf("Invalid socket\n");
		exit(1);
	}

	bzero(&bindAddr, sizeof(bindAddr));
	bindAddr.sin_family = AF_INET;
	bindAddr.sin_port = htons(port);
	bindAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	printf("Binding server to port %d\n", port);
	if (bind(sockfd, (struct sockaddr *)&bindAddr, sizeof(bindAddr)) != 0) {
		close(sockfd);
		printf("binding err!\n");
		exit(1);
	}

	printf("waiting data from other client...\n");

	while (1) {
		/* FIXME */
		recvLen = recvfrom(sockfd, recvBuf, 2048, 0, (struct sockaddr *)&cliAddr, &cliAddrLen);
		printf("client ip = %s\n", inet_ntop(AF_INET, &cliAddr.sin_addr.s_addr, cliIP, INET_ADDRSTRLEN));
		sendto(sockfd, recvBuf, recvLen, 0, (struct sockaddr *)&cliAddr, cliAddrLen);
	}

	close(sockfd);

	return 0;
}

int daemon_mode()
{
	/* Our process ID and Session ID */
	pid_t pid, sid;
	FILE *fp;

	fp = fopen(PIDFILE, "r+");
	if (fp != NULL) {
		printf("exist!!!\n");
		fclose(fp);
		exit(-1);
	}

	/* Fork off the parent process */
	pid = fork();
	if (pid < 0)
		exit(EXIT_FAILURE);

	/* If we got a good PID, then
	 * we can exit the parent process.
	 */
	if (pid > 0)
		exit(EXIT_SUCCESS);

	/* Change the file mode mask */
	umask(0);

	/* Open any logs here */

	/* Create a new SID for the child process */
	sid = setsid();
	if (sid < 0) {
		/* Log the failure */
		exit(EXIT_FAILURE);
	}

	/* log sid at cwmp-datamodel.pid */
	fp = fopen(PIDFILE, "w+");
	fprintf(fp, "%d\n", sid);
	fclose(fp);

	/* Change the current working directory */
	if ((chdir("/")) < 0) {
		/* Log the failure */
		exit(EXIT_FAILURE);
	}

	/* Close out the standard file descriptors */
	close(STDIN_FILENO);
	close(STDOUT_FILENO);
	close(STDERR_FILENO);

	/* Daemon-specific initialization goes here */

	/* The Big Loop */
	while (1) {
		/* Do some task here ... */
		socket_server();
		/* sleep(30); wait 30 seconds */
	}
	exit(EXIT_SUCCESS);
}

int check_parameter(struct object_datamodel *a)
{

	char *delim = ".";
	char *original_root = "InternetGatewayDevice.";
	char *const_dot = ".";
	char *const_i = "i";
	char *seg[10];
	int total_len = 0;
	int root_len = 0;
	char argv_tmp[256] = {0,};
	char combi_str[256] = {0,};
	int seg_num = 1;
	int indx_ret = 0;
	int i = 0;
	int k = 0;
	int h = 0;
	int j =0;

	total_len = strlen(optarg);
	root_len = strlen(original_root);

	printf("total_len = %d\n", total_len);
	printf("root_len = %d\n", root_len);

	memcpy(argv_tmp, optarg, total_len);

	if ( memcmp(argv_tmp, original_root, root_len) != 0 ) {
		printf("The first nod is Not \"InternetGatewayDevice\" !\n");
		return 0;
	}

	/* Show the original string */
	printf("Original string = %s \n", argv_tmp );

	/* Divide string to each segment*/
	seg[0] = strtok(argv_tmp, delim);
	printf("seg[0] = %s ", seg[0]);
	printf("\n");

	while ((seg[seg_num] = strtok(NULL, delim))){
		printf("seg[%d] = %s ",seg_num , seg[seg_num]);
		seg_num++;
		printf("\n");

	}

	for (k = 0; k < seg_num; k++){
		h = strlen(seg[k]);

		for(i = (h-1); i >= 0; i--){
			if (isdigit(*(seg[k]+i)))
				h--;
			else
				break;
		}
		/* if all character are numbers, change it to "i" */
		if (h == 0){
			a->index[j] = atoi(seg[k]);
			printf("a->index[%d] = %d \n", j ,a->index[j]);
			j++;
			seg[k] = const_i;
		}

	}

	printf("Divide for %d segments.\n", seg_num);

	/* Compose all segments*/
	for (i = 1; i < seg_num ; i++) {
		strcat(combi_str, seg[i]);
		strcat(combi_str, const_dot);
	}

	printf("combi_str = %s \n", combi_str);
	h = strlen(combi_str);
	combi_str[h] = '\0';

	printf("There are %d characters in the \"combi_str\" !\n", strlen(combi_str));

	a->output_mode = 0;
	a->param_name[0] = '\0';
	a->action = ACTION_GET_PARAM_NAMES;
	a->next = NULL;

	/*
	 * Compare entire sentence to find out which is match
	 * if match, return 0.
	 */
	for (i = 0; i < NUM_OBJECTS; i++){
		indx_ret = memcmp(combi_str, name_func_table[i][0], strlen(combi_str));

		if ( indx_ret == 0){

			a->obj_name = name_func_table[i][0];
			a->Func = (void *)(name_func_table[i][1]);

			return 0;
		}
	}

	return -1;
}

int main(int argc, char *argv[])
{
	int option = 0;
	const char *short_option = "a:b:c:d:e:f:g:j:sh";
	const struct option long_options[] = {
			{"setparametervalues", required_argument, 0, 'a'},
			{"getparametervalues", required_argument, 0, 'b'},
			{"getparameternames", required_argument, 0, 'c'},
			{"setparameterattributes", required_argument, 0, 'd'},
			{"getparameterattributes", required_argument, 0, 'e'},
			{"addobject", required_argument, 0, 'f'},
			{"deleteobject", required_argument, 0, 'g'},
			{"getrpcmethods", no_argument, 0, 'j'},
			{"socket", no_argument, 0, 's'},
			{"help", no_argument, 0, 'h'},
			{0, 0, 0, 0}
	};

	while (1) {
		option = getopt_long(argc, argv, short_option,
					long_options, 0);

		if (option == -1)
			break;

		switch (option) {
		case 'a':	/* SetParameterValues */
			//check_parameter(argc, argv);
			break;
		case 'b':	/* GetParameterValues */
			break;
		case 'c':	/* GetParameterNames */
			cwmp_dm_GetParameterNames();

			break;
		case 'd':	/* SetParameterAttributes */
			break;
		case 'e':	/* GetParameterAttributes */
			break;
		case 'f':	/* AddObject */
			break;
		case 'g':	/* DeleteObject */
			break;
		case 'h':	/* help */
			help();

			break;
		case 'j':	/* GetRPCMethods */
			break;
		case 's':	/* UDP socket mode */
			daemon_mode();

			break;
		default:
			help();

			break;
		}

	}

	return 0;
}
