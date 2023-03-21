#include "main.h"

/**
*print_alphabet - print lowercase and end with new line
*Return: void
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
