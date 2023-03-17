#include<stdio.h>

/**
*main - prints 1- 10
*Return: 0 if success
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
