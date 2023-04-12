#include"main.h"
#include<string.h>
#include<stdlib.h>
/*
**_strdup - copy string to string 2
*@*str: pointer to input string
*
*
*/
char *_strdup(char *str)
{
	char *str2 = malloc(sizeof(str) * (strlen(str)+ 1));
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(str2, str);
		return (str2);

	}
	free(str2);
}
