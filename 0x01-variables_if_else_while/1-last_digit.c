#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/*
 *
 * main - prints the last digit of the number stored in the variable n
 *
 * Return: Always 0;
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if ( (n%10)>5 )
		printf("Last digit of %d is",n,"and is greater than 5");
	else if ( (n%10)<6 )
		printf("Last digit of %d is",n,"and is less than 6 and not 0");
	else
		printf("Last digit of %d is",n, "and is 0";
	return (0);
}
