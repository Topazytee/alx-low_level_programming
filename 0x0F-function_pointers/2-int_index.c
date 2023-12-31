#include "function_pointers.h"

/**
 * int_index - Finds the index of a given integer in an array
 * @array: The array to search
 * @size: The number of elements in the array
 * @cmp: The comparison function to use
 *
 * Return: The index of the found integer, or -1 if not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
