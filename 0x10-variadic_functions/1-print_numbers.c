#include "variadic_functions.h"
#include<stdarg.h>
#include<stddef.h>
#include<stdio.h>
/**
 *print_numbers - prints numbers
 *@separator: pearates the numbers
 *@n: number of args
 *
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ls, unsigned int));
		if (i != n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(ls);
	printf("\n");
}
