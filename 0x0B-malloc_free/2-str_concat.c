#include "main.h"
#include<string.h>
#include<stdlib.h>
/**
 *char *str_concat - concatenate s1 and s2 to new string
 *@s1: string 1
 *@s2: string 2
 *Return: pointer to new string or NULL
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *s12;
	int len1, len2;

	if (s1 == NULL)
		len1 = 1;
	else
		len1 = strlen(s1);
	if (s2 == NULL)
		len2 = 1;
	else
		len2 = strlen(s2);
	s12 = malloc(((sizeof(char) * len1) + (sizeof(char) * len2) + 1));
	if (s12 != NULL)
	{
		strcpy(s12, s1);
		strcat(s12, s2);
		return (s12);
	}
	else
		return (NULL);
}
