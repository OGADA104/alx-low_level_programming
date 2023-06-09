#include<stdio.h>
#include<stdlib.h>
/**
 *main - prints multiplication
 *@argc: arguments count
 *@argv: arguments passed
 *Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	mul = arg1 * arg2;
	printf("%d\n", mul);
	return (0);
}
