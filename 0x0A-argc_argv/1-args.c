#include<stdlib.h>
#include<stdio.h>

/**
*main - print no of args
*@argc: arguments count
*@argv: arguments passed
*Return: 0 if success
*
*
*/
int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
