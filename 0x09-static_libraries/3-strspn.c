#include "main.h"
#include<string.h>

/**
*_strspn - gets the length of a prefix substring
*@s: input string
*@accept: char to check
*Return: number of bytes
*
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
