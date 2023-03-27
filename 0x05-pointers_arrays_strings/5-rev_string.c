#include "main.h"
#include<stdio.h>
#include<string.h>
/**
*rev_string - print a string in revers
*@s: input string
*/
void rev_string(char *s)
{
	int i, len;
	char temp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
