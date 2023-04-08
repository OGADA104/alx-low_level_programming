#include "main.h"
#include<string.h>

/**
**_strncat - concatenate with most n bytes from src
*@dest: destination string
*@n: number of bytes in src
*@src: string to be concateneted
*Return: returns concated string
*/
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
