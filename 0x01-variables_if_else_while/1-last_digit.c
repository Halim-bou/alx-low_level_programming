#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- assign a random number to the variable n each time it is executed
 * Return: Always (success)
 *
 */
int main(void)
{
	int n, last_d;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_d = n % 10;

	if (n > 5)
	{
		printf("last digit %d is %d and is greater than 5\n", n, last_d);
	}
	else if (n == 0)
	{
		printf("last digit %d is %d and is 0\n", n, last_d);
	}
	else
	{
		printf("lastd digit %d is %d and is less than 6 and not 0\n", n, last_d);
	}
	return (0);
}
