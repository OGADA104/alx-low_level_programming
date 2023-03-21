#include "main.h"

/**
*_isalpha - checks if character is uppercase
*@c: input character holder
*Return: always returns 0
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
