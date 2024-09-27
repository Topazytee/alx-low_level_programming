#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value
 * @s: Starting address of memory to be filled
 * @b: The desired value
 * @n: Number of bytes to be changed
 *
 * Return: A pointer to the start of the filled memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s++ = b;
		n--;
	}

	return (s);
}
