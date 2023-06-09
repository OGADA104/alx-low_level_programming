#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 *main - adds positive numbers
 *@argc: argument count
 *@argv: arguments passed
 *Return: 0 if suucess
 *
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j, num;

	if (argc < 3)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = 0;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]))
			{
				num = num * 10 + (argv[i][j] - '0');
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
