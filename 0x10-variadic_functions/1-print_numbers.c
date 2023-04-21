#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
/**
 *print_numbers - print numbers in variadic func
 *@separator: char to separate numbers
 *@n: number or args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list np;

	if (n == 0)
		exit(0);
	va_start(np, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(np, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		if (i == n - 1)
			printf("\n");

	}
}
