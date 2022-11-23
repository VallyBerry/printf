#include "printf.h"
#include <stdio.h>

/**
 * _printf - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

int _printf(const char *format, ...)
{
	int i;
	char *a;
	va_list ap;

	va_start(ap, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 's':
				printf("%s", va_arg(ap, char*));
				break;
			case '%':
				a = "%";
				printf("%%", a);
				break;
		}
		i++;
	}
	va_end(ap);
	return (0);
}
