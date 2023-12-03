#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdint.h>


#define BYTE unsigned char

// Primitivas
void printBytes(BYTE bytes[], int n);
int FCS(BYTE frame[], int l);

#endif