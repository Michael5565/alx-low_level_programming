#include <stdlib.h>
#include<stdio.h>
#include<stddef.h>
#include <time.h>

/* more headers goes there */
/*
 * betty style doc for function main goes there */int main(void)

{

	int n;
	int l;
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	l=n%10
	if (l > 5)
		printf("Last digit of n is and is greater than \n");
	if (l == 0)
		printf("Last digit of n is and is 0\n");
	if (l < 6 && l > 0)
		printf("Last digit of n is and is less than 6 and not 0\n");

return (0);

}
