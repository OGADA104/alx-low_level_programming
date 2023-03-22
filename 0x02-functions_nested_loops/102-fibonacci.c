#include<stdio.h>

/**
*main - print fibonacci numbers
*
*Return: 0 if success
*/
int main(void)
{
	int prev1 = 1, prev2 = 2, current, j;

	printf("%d,%d,", prev1, prev2);
	for (j = 3; j <= 50; j++)
	{
		current = prev1 + prev2;
		printf("%d", current);
		prev1 = prev2;
		prev2 = current;
		if (j != 50)
			printf(",");
	}
	printf("\n");
	return (0);
}
