#include "main.h"
#include<string.h>
/**
**_memcpy - copy memory from src to dest
*@dest: destinstion
*@src: source
*@n: bytes to be copied
*Return: memcopy values
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
