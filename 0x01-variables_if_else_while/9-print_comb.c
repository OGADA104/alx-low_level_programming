#include<stdio.h>

/**
*main - prints a combination of single numbers
*
* Return: 0 if success
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
