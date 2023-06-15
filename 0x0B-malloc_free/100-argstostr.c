#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *
 *
 *
 *
 *
 *
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *p;

	if (ac == 0 || *av == NULL)
		return (NULL);
	if (*p != NULL)
	{
		*p = malloc(sizeof( *) * ac);
		for (i = 0; i < ac; i++)
		{
			p[i] = av[i];
			printf("%s\n", p[i]);
		}
		return (*p);
	}
	return (NULL);

}
