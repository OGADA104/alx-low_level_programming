#include "main.h"
#include<stdio.h>
/**
*reverse_array - print arrays in reverse
*@a: input array
*@n: size if array
*Return: void
*
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
