#include "variadic_functions.h"
#include<stdarg.h>
/**
 *sum_them_all - sum of variadic args
 *@n: number of args
 *Return: 0 or sum of args
 *
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list np;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(np, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(np, int);
	}
	va_end(np);
	return (sum);
}
