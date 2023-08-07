#include "main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 *
 *
 *
 *
 *
 */
char **strtow(char *str)
{
	int i, s_len;
	char **wrds;
	int *w_len;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	s_len = strlen(str);
	wrds = malloc(s_len + 1);
	if (wrds != NULL)
	{
		for (i = 0; i < s_len; i++)
		{
			if (str[i] != " ")
			{
				w_len[i] = strlen(str[i]);
				wrds[i] = malloc(w_len[i] + 1);
				strcpy(wrds[i], str[i]);
				printf("%s\n", wrds[i]);
			}
		}
		return (wrds);
	}
	return (NULL);
}
