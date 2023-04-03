#include "main.h"
#include<string.h>

/**
**_strpbrk - searches a string for any set of bytes
*@s: input string
*@accept: strings
*Return: a pointer to the bytes in s matching bytes in accept
*
*/
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
