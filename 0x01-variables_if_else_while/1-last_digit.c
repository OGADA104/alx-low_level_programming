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
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last_digit > 5)
		printf("Last digit of %d is greater than 5\n", n);
	else if (last_digit == 0)
		printf("Last digit of %d and is 0\n", n);
	else if (last_digit < 5 && last_digit != 0)
		printf("Last digit of %d and is less than 6 and 0\n", n);
	return (0);
}
