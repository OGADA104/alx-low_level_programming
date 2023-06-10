#include <stdio.h>
#include <stdlib.h>
/**
 *main - return change
 *@argc: argument count
 *@argv: arguments passed
 *Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int cents, num_coins, min_coins, i;
	int coins[5] = {25, 10, 5, 2, 1,};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = sizeof(coins) / sizeof(coins[0]);
	min_coins = 0;
	for (i = 0; i < num_coins; i++)
	{
		min_coins += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", min_coins);
		return (0);
}
