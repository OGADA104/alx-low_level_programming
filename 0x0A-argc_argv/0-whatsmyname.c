#include<stdio.h>
#include<stdlib.h>
/**
 *main - print program name
 *@argc: argument count
 *@argv: array of arguments
 *Return: 0 if success
 *
 *
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s", argv[0]);
	}
	printf("\n");
	return (0);
}
