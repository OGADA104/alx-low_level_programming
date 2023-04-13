#include "main.h"
#include<stdlib.h>
#include<string.h>

/**
*string_nconcat - concat first n bytes
*@s1: string 1
*@s2: string 2
*@n: number of bytes
*Return: null if failled and pointer to new
*memory when success
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *join;
	unsigned int m = n;

	join = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (join == NULL)
		return (NULL);
	if (n > strlen(s2))
		m = strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	strcpy(join, s1);
	strncat(join, s2, m);
	return (join);
}
