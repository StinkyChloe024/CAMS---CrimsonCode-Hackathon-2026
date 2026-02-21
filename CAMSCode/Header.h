#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifndef HEADER_H
#define HEADER_H

int rand_num(void);

void sentences(char adjective[15], char noun[15], char verb[15], int n);

#endif