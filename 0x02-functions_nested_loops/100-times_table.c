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

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				printf("%d", i * j);
			else
				printf("%4d", i * j);
			if (i * j != n * n && j != n)
				printf(",");	
		}
		printf("\n");
	}
}
