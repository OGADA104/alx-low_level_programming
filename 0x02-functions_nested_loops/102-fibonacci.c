#include<stdio.h>

/**
*main - print fibonacci numbers
*
*Return: 0 if success
*/
int main(void)
{
	int i = 1, j;

	for (j = 1; j <= 50; j++)
	{
		printf("%d", i);
		i = i + i;
		if (j != 50)
			printf(",");
	}
	printf("\n");
}
