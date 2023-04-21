#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void print_all(const char * const format, ...)
{
	va_list args;
	char *sval, *separator = "";
	int ival;
	float fval;
	char cval;
	unsigned int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
	switch (format[i])
	{
		case 'c':
			cval = (char) va_arg(args, int);
			printf("%s%c", separator, cval);
			break;

		case 'i':
			ival = va_arg(args, int);
			printf("%s%d", separator, ival);
			break;

		case 'f':
			fval = (float) va_arg(args, double);
			printf("%s%f", separator, fval);
			break;

		case 's':
			sval = va_arg(args, char *);
			if (sval == NULL)
			printf("%s(nil)", separator);
		else
			printf("%s%s", separator, sval);
		break;

		default:
			i++;
			continue;
	}
	separator = ", ";
	i++;
	}

	printf("\n");
	va_end(args);
}

