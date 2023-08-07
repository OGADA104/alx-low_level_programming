#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - split a string into words
 * @str: input string
 * Return: pointer to an array of strings (words) or NULL on failure
 */
char **strtow(char *str)
{
	int i, j, k, s_len, word_count = 0;
	char **words;
	int in_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	s_len = strlen(str);
	/* Count the number of words in the input string */
	for (i = 0; i < s_len; i++)
	{
		if (str[i] != ' ' && !in_word)
		{
			word_count++;
			in_word = 1;
		}
		else if (str[i] == ' ')
		{
			in_word = 0;
		}
	}
	if (word_count == 0)
		return (NULL);
	if (word_count == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words != NULL)
	{
		in_word = 0;
		j = 0;
		for (i = 0; i < s_len; i++)
		{
			if (str[i] != ' ')
			{
				if (!in_word)
				{
					/* Start of a new word */
					k = i;
					in_word = 1;
				}
			}
			else if (in_word)
			{
				/* End of the word, allocate memory and copy the word */
				int word_len = i - k;
				words[j] = malloc(sizeof(char) * (word_len + 1));
				if (words[j] != NULL)
				{
					strncpy(words[j], str + k, word_len);
					words[j][word_len] = '\0';
					/* Null-terminate the word */
					j++;
					in_word = 0;
				}
			}
		}
		words[j] = NULL; /* Null-terminate the array of words */
		return (words);
	}
	return (NULL);
}
