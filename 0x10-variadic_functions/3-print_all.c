#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything, depending on the format string
 * @format: A format string specifying the types of arguments to be printed
 */

void print_all(const char * const format, ...)
{
	int p = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[p])
		{
			switch (format[p])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					p++;
					continue;
			}
			sep = ", ";
			p++;
		}
	}

	printf("\n");
	va_end(list);
}
