#include<stdio.h>

/**
*main - prints characters z-a in lowercase
*Return: 0 if success
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);
	putchar('\n');
	return (0);
}
