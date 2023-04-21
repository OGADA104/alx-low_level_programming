#include "variadic_functions.h"
#include<stdarg.h>
#include<stddef.h>
#include<stdlib.h>
#include<stdio.h>
/**
 *print_strings - print strings
 *@separator: printed between strings
 *@n: number of args
 *
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list np;
	char *str;

	if (n == 0)
		return;
	va_start(np, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(np, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(np);
}
