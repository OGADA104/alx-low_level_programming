#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
/**
*main - adds args passed
*@argc:argument count
*@argv:argument vector array
*Return: 0 if success
*/
int main(int argc, char *argv[])
{
	int i, sum = 0, psd;

	for (i = 1; i < argc; i++)
	{
		psd = atoi(argv[i]);
		if (psd >= 0 && psd != isalpha(psd))
		{
			sum += psd;
		}
		else if (psd < 0)
		{
			sum = 0;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
