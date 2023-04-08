#include "main.h"
#include<string.h>
/**
**_strcpy - copy src to dest
*@dest: destination
*@src: source to copy from
*Return: destination value
*/
char *_strcpy(char *dest, char *src)
{
	int i, n = strlen(src);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
