#include "main.h"
#include<ctype.h>
#include<string.h>
/**
**string_toupper - converts string to uppercase
*@str:  any input variable
*Return: uppercase character
*
*
*/
char *string_toupper(char *str)
{
	char upper = str;
	if (str == NULL)
		return;
	upper = toupper(str);
}
