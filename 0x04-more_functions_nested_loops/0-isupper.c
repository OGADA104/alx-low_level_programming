#include "main.h"
#include<ctype.h>
/**
*_isupper - checks if a character is uppercase
*@c: input character
*Return: 1 if upercase 0 if lower case
*
*/
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else if (islower(c))
		return (0);
	return (0);
}
