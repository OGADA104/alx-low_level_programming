#include "main.h"
#include<stdio.h>
#include<string.h>
/**
*puts_half - outputs half
*@str: input string
*
*/
void puts_half(char *str)
{
	int i, n, len = strlen(str);

	if (len % 2 != 0 && str[len] != '\0')
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}
	for (i = n; i <= len - 1; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
