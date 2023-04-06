#include "main.h"

/**
*factorial - calculate facturial of n
*@n: input integer
*Return: -1 if n < 0, 1 n == 0, facturial of n
*
*
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n-1));
}
