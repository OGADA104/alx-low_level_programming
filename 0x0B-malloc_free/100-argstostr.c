#include "main.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 **argstostr - print arguments passed
 *@ac: integer count
 *@av: argument passed
 *Return: pointer to args or null
 *
 *
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]);
	}
	p = malloc(sizeof(char) * (total_length + ac + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0, j = 0; i < ac; i++)
	{
		strcpy(p + j, av[i]);
		j += strlen(av[i]);
		p[j++] = '\n';
	}
	return (p);
}
