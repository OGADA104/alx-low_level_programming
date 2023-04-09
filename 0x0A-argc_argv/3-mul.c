#include<stdio.h>
#include<stdlib.h>
/**
*main - prints the number of arguments passed
*@argc:argument count
*@argv:argument vector array
*Return: 0 if success
*/
int main(int argc, char *argv[])
{
	int argv1;
	int argv2;
	int mult;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		argv1 = atoi(argv[1]);
		argv2 = atoi(argv[2]);
		mult = argv1 * argv2;
		printf("%d\n", mult);
		return (0);
	}
}
