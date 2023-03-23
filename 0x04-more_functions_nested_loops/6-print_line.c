#include "main.h"
/**
*print_line - print lines on terminal
*@n: intake value
*/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
		if (n < 0)
			_putchar('\n');
	}
	_putchar('\n');
}
