#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of size and assign the char c
 * @size: size of array
 * @c: char to assign
 * Description: Create an array of size and assign the char c
 * Return: pointer to array, NULL if the allocation fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int s;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (s = 0; s < size; s++)
		str[s] = c;
	return (str);
}
