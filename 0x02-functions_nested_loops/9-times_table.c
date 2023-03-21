#include "main.h"

/**
*times_table - prints multiplaction table 9*9
*
*
*/
void times_table(void)
{
	int row, column, result;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			result = row * column;
			if (result < 10)
			{
				_putchar(result + '0');
			}
		else
		{
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
		}
		_putchar('\n');
	}
}
