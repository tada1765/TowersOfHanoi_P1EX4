#ifndef _TOWERSOFHANOI_H
#define _TOWERSOFHANOI_H

#include	<stdio.h>
#include	<stdarg.h>
#include	<malloc.h>
#include	<stdlib.h>
#include	<string.h>
#include	<math.h>

#define TRUE 1
#define FALSE 0

char * PrintGreeting(int trigger);

///* online code
void towers(int, char, char, char);
///* lecture code
void TowersOfHanoi(int n, char frompeg, char topeg, char auxpeg);

#endif // _TOWERSOFHANOI_H
