#include "main.h"
#include<stdlib.h>
#include<limits.h>
/**
*_atoi - convert string to int
*@s: input string
*Return: 0 if no numbers
*/
int _atoi(char *s) {
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n') {
		i++;
	}
	if (s[i] == '+')
	{
		i++;
	}
	else if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
		{
			return sign == 1 ? INT_MAX : INT_MIN;
		}
		result = result * 10 + digit;
		i++;
	}
	return sign * result;
}
