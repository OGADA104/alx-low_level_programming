#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
*main - detemines if random number is positive or negative
*Return: either positive or negative
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else if (n % 10 < 5 && n % 10 != 0)
		printf("Last digit of %d is %d and is less than 6 and 0\n", n, n % 10);
	return (0);
}
