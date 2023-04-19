#include "function_pointers.h"
#include<stdlib.h>
/**
 *print_name - prints a name
 *@name: name to be printed
 *@f: pointer to print_name function
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(0);
	f(name);
}
