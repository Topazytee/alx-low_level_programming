#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all of the function's arguments
 * @n: The number of arguments passed to the function
 * @...: A variable number of arguments to be summed
 *
 * Return: The sum of all arguments, or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
