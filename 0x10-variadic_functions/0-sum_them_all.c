#include<stdarg.h>
#include<stdio.h>

/**
 *sum_them_all - sum all args passed
 *@n: number of args passed
 *Return: sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ls;

	if (n == 0)
		return (0);
	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ls, int);
	}
	va_end(ls);
	return (sum);
}
