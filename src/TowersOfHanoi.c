#include "TowersOfHanoi.h"

char * PrintGreeting(int trigger)
{
	char * good = "Hello World";
	char * bad = "Who are you";
	
	if(trigger == TRUE)
		return good;
	return bad;
}


// from online							A						 C					 B
void towers(int num, char frompeg, char topeg, char auxpeg){
    if (num == 1){
        printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
        return;
    }									//A				B			C
    towers(num - 1, frompeg, auxpeg, topeg);
    printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);
    towers(num - 1, auxpeg, topeg, frompeg);
}										//B				C				A
//*/

// from lecture
void TowersOfHanoi(int n, char frompeg, char topeg, char auxpeg){
	if(n==1){
		printf("Move disk 1 from peg %c to peg %c\n", frompeg, topeg);
		return;
	}										//A		   B		  C
	TowersOfHanoi(n-1,frompeg,auxpeg, topeg);
	printf("Move disk %d from ped %c to peg %c\n", n, frompeg, topeg);
	TowersOfHanoi(n-1, auxpeg, topeg, frompeg);
}											//B		  C		   A
