#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * *string_nconcat - concat first n strings of
 *s1 to s2
 *@s1: first string
 *@s2: second string
 *@n: number of bytes to concat
 *Return: pointer to concat string or NULL if fails
 *
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = malloc(strlen(s1) + n + 1);
	if (p != NULL)
	{
		strcpy(p, s1);
		strncat(p, s2, n);
		return (p);
	}
	return (NULL);
}
