#include "variadic_functions.h"
#include<stdarg.h>
#include<stddef.h>
#include<stdio.h>

/**
 *print_strings - prints strings
 *@separator: separates
 *@n: no of args
 *
 *
 *
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;
	char *str;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ls, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ls);
	printf("\n");
}
