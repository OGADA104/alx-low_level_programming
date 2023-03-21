#include "main.h"
/**
*print_sign - finds out if an int is a positive, negative or zer0
*@n: input number
*Return: 1 if positive, 0 if zero & -1 if negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
