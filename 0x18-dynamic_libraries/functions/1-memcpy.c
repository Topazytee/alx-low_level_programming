#include "main.h"

/**
 * _memcpy - Copies a block of memory from one location to another
 * @dest: The destination memory location
 * @src: The source memory location
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the destination memory location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = 0;
	int e = n;

	for (; d < e; d++)
	{
		dest[d] = src[d];
		n--;
	}
	return (dest);
}
