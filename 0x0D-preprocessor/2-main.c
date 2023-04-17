#include<stdio.h>
#include<stdlib.h>
#ifndef FILENAME
#define FILENAME __FILE__
#endif
/**
 *main - print file name
 *Return: 0 if success
 *
 *
 */
int main(void)
{
	printf("%s\n", FILENAME);
	return (0);
}
