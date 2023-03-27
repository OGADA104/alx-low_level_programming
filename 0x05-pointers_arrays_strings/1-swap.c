#include "main.h"
/**
*swap_int - swaps the value of a to 42 and b to 98
*@a: first input
*@b: second input
*/
void swap_int(int *a, int *b)
{
	int holder = *a;
	*a = *b;
	*b = holder;
}
