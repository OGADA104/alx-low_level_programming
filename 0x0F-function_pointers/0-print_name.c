#include<stddef.h>
#include "function_pointers.h"

/**
 *print_name - prints name
 *@name: name passed
 *@f: function pointer
 *
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
