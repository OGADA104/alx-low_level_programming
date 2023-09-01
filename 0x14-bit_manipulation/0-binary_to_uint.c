#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to the binary string.
 * Return: The converted unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit;

	if (b == NULL)
		return (0);
	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		bit = *b - '0';
		result = (result * 2) + bit;
	}
	return (result);
}
