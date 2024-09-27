#include "main.h"
/**
 * char *_strcpy - Copies a string from one location to another
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the destination string
 */


char *_strcpy(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (*(src + d) != '\0')
	{
		d++;
	}
	for ( ; s < d ; s++)
	{
		dest[s] = src[s];
	}
	dest[d] = '\0';
	return (dest);
}
