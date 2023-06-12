#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 **_strdup - copy contents of str to str2
 *@str: input string
 *Return: pointer to string or NULL
 *
 *
 *
 *
 *
 */
char *_strdup(char *str)
{
	char *str2;
	int i, len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	str2 = malloc(sizeof(char) * (len + 1));
	if (str2  != NULL)
	{
		for (i = 0; i < len; i++)
		{
			str2[i] = str[i];
		}
		return (str2);
	}
	else
		return (NULL);
}
