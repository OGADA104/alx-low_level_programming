#include "main.h"
#include<stdio.h>
#include<string.h>
/**
*puts2 - prints 0,2,4,6,8,...
*@str: input string
*/
void puts2(char *str)
{
	int i, ln = strlen(str);

	for (i = 0; i <= ln - 1; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
