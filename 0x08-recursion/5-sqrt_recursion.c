#include "main.h"
#include<math.h>
/**
*_sqrt_recursion - find square root
*@n: input number
*Return: -1, or square root
*
*/
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n % 2 != 0 || n % 3 != 0 || n % 5 != 0 || n % 7 != 0)
	{
		return (-1);
	}
	else
		return (_sqrt_recursion(n));
}
