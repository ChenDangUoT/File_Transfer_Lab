#pragma once


// specify the system manually

#define win 1
#define UNIX 0
#define UDP_PORT_LOW_RANGE 0
#define UDP_PORT_HIGH_RANGE 65535

// other common headers

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>
#include <time.h>
#include <math.h>


struct packet {
	unsigned int total_frag; 
	unsigned int frag_no; 
	unsigned int size;
	char* filename;
	char filedata[1000];
};
