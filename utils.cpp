#include <stdio.h>
#include "utils.h"
#define BYTE unsigned char

// Funciones
void printBytes(BYTE frame[], int l){
	printf("####### RAW MSG: #######\n");
	int d = 0;
	for(int i=0;i<l+1;i++){
		int c = 0;
		for(int j=0; j<8; j++){
			if(frame[i] & (0x80)>>j){printf("1");}
			else{printf("0");}
			c++;
			if(c==4||c==8){printf(" ");}
		}
		d++;
		if(d % 2 == 0){printf(" ");printf("\n");}
	}
	printf("\n########################");
}

int FCS(BYTE frame[], int l){
	int fcs=0;
	for(int j=0;j<l;j++)
		for(int i=0;i<8;i++)
			fcs+=((frame[j]>>i)&0x1);
	return fcs;
}