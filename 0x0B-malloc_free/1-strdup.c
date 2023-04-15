#include"main.h"
#include<string.h>
#include<stdlib.h>
/**
**_strdup - copy string to string 2
*@str: pointer to input string
*Return: pointer to str 2
*
*/
char *_strdup(char *str)
{
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}
	str2 = malloc(sizeof(char) * (strlen(str) + 1));
	if (str2 == NULL)
		return (NULL);
	strcpy(str2, str);
	return (str2);
}
