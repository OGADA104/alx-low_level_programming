#include "main.h"
#include<stdio.h>
#include<string.h>

/**
*_print_rev_recursion - prints strings in reverse
*character by character
*@s: pointer to string
*
*
*
*
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
