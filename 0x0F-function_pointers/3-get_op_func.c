#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Retrieves the appropriate function pointer
 * based on the provided operator
 * @s: The operator character
 *
 * Return: The function pointer corresponding to the specified operator,
 * or NULL if not found
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int a = 0;

	while (ops[a].op != NULL && *(ops[a].op) != *s)
		a++;

	return (ops[a].f);
}
