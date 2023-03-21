#include<unistd.h>
/**
*_putchar - writes charaters _putchar to standard output
*@_putchar: folowed by a new line
*Return: string _putchar
*/
int _putchar(char _putchar)
{
	return (write(1, &_putchar, 1));
}
