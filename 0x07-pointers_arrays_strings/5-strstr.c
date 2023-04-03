#include "main.h"
#include<string.h>

/**
**_strstr - finds a string within a string
*@haystack: string to search
*@needle: string to look for
*Return: pointer to the result
*/
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
