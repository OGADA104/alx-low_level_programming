#include "main.h"
#include<stdio.h>
/**
*print_diagsums - print sums of main
*and secondary diagonals
*@a: pointer to array
*@size: size of array
*Return: void
*
*/
void print_diagsums(int *a, int size)
{
	int sum = 0, sum2 = 0, i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum += a[i * size + j];
			}
			if (i + j == size - 1)
			{
				sum2 += a[i * size + j];
			}
		}
	}
	printf("%d, %d", sum, sum2);
	printf("\n");
}
