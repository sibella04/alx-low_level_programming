#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int n;
	int 1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1 = n % 10;

	if (1 > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n, 1);
	}
	else if (1 == 0)
	{
		print("Last digit of %d and is 0\n", n, 1);
	}
	return (0);
}
