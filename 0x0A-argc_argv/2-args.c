#include<stdio.h>
#include<stdlib.h>

/**
 *main - print arguments passed
 *@argc: argument count
 *@argv: arguments passed
 *Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
