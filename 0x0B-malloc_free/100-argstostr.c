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
	int i, t_len = 0;
	char **p;

	if (ac == 0 || *av == NULL || *av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		t_len += strlen(av[i]) + 1;
	}
	p = malloc((sizeof(char *) * ac) + 1);
	if (p != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			p[i] = malloc(strlen(av[i]));
			strcpy(p[i], av[i]);
			printf("%s\n", p[i]);
		}
	}
	return (0);
}
