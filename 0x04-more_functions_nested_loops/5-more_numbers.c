#include "main.h"
#include<stdio.h>
/**
*more_numbers - prints 1-14 10 times
*
*Return: void
*
*/
void more_numbers(void)
{
	int i, num;

	for (i = 0; i <= 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
		printf("%d", num);
		}
		printf("\n");
	}
	printf("\n");
}
