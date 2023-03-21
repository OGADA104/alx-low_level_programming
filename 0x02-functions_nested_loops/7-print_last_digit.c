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
	int lst_dig;

	lst_dig = n % 10;
	return (lst_dig);
}
