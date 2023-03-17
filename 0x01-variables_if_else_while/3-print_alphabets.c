#include<stdio.h>

/**
*main - prints characters a-z in lowercase then
*in upercase followed by new line
*Return: 0 if success
*/

int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);

	for (C = 'A'; C <= 'Z'; ++C)
		putchar(C);
	putchar('\n');
	return (0);
}
