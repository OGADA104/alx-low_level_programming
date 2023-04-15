#include "main.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
*argstostr - print out args passed
*@ac: arg count
*@av: pointers to arguments
*Return: pointer to args
*
*/
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);
	ptr = malloc(sizeof(*av) * ac);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strcat(ptr, av[i]);
		strcat(ptr, "\n");
	}
	return (ptr);
}
