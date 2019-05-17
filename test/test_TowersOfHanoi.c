#include "unity.h"
#include "TowersOfHanoi.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_TowersOfHanoi_simpleTest(void)
{
  char * good = "Hello World";
	char * bad = "Who are you";
	char * result = PrintGreeting(FALSE);
	
	TEST_ASSERT_EQUAL_STRING(bad, result);  
}


void test_TowersOfHanoi_display_only(void)
{
	 /*
    int num;
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
   */
	 int n = 3;
   printf("Numbers of Disk = %d \n",n); 
   TowersOfHanoi(n, 'A', 'C', 'B');
}