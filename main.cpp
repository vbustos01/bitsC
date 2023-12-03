#include <stdio.h>
#include <stdint.h>
#include "utils.h"

//#define BYTE unsigned char

int main(){
	/* 
		Estructura del protocolo:
		|CMD|L|msg|FCS

		Largo max msg : 252 bits
		cmd : 0-255
	*/
	int l = 255;
	int cmd = 255;
	BYTE frame[l];
	frame[0] = l;
	frame[1] = cmd;
	for(int i=2;i<255;i++)
		frame[i] = 0xFF;
	int fcs = FCS(frame, l);
	frame[255] = fcs;
	//printf("%i \n", frame[255]);
	printBytes(frame, l);
	return 0;
}

