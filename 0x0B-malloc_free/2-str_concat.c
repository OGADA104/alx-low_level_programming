#include "main.h"
#include<string.h>
#include<stdlib.h>
/**
**str_concat - concatenete two str
*@s1: string 1
*@s2: string 2
*Return: pointer to concat string
*
*/
char *str_concat(char *s1, char *s2)
{
	char *srt12 = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (srt12 == NULL)
	{
		return (NULL);
	}
	else if (strlen(s1) > 0 || strlen(s2) > 0)
	{
		strcpy(srt12, s1);
		strcat(srt12, s2);
	}
	return (srt12);
	free(srt12);
}
