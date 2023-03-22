#include "main.h"
#include<stdio.h>
/**
*print_times_table - prints multiple tables of n
*@n: intake integer
*Return: void
*/
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		if (n > 15 || n == 0)
		{
			return;
		}
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				printf("%d", i * j);
			else
				printf("%4d", i * j);
		}
		printf("\n");
	}
}
