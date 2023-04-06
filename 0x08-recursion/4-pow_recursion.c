#include "main.h"
#include<math.h>

/**
*_pow_recursion - calc power with recursion
*@x: base int
*@y: power value
*Return: -1 if y < 0,1 if y equals 0
*calculate power of base x to y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
