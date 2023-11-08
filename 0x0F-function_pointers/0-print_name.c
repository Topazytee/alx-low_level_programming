#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a given name using the provided function pointer
 * @name: The string to print
 * @f: The function pointer to use for printing
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
