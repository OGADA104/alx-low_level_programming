#include<stdio.h>
#include "main.h"
/**
*print_last_digit - prints the last digit of a number
*@n: integer input
* Return: value of last digit
*
*/
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
	{
		i = -i ;
	}
	_putchar('0' + i);
	return (i);
}
