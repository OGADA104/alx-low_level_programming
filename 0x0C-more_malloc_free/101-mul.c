#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Check if a character is a digit.
 * @c: The character to check.
 * Return: 1 if the character is a digit, 0 otherwise.
 */

int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Calculate the length of a string.
 * @str: The string.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _multiply - Multiply two positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 */
void _multiply(char *num1, char *num2)
{
	int len1;
	int len2, i, j;
	int len_result;
	int *result, start;

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len_result = len1 + len2;
	result = calloc(len_result, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
	}
	start = 0;
	while (start < len_result - 1 && result[start] == 0)
	{
		start++;
	}
	for (; start < len_result; start++)
	{
		printf("%d", result[start]);
	}
	printf("\n");
	free(result);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!_isdigit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!_isdigit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	_multiply(num1, num2);
	return (0);
}
