#include "main.h"
/**
*is_prime_number - check for prime numbers
*@n: input no.
*Return: 1 if prime number 0 if not
*
*
*
*/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0)
	{
		return (1);
	}
	else
		return (0);
}
