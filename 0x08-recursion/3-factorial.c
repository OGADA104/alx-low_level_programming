#include "main.h"

/**
 *factorial - finds factoial
 *@n: input digit
 *Return: factorial of n
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
