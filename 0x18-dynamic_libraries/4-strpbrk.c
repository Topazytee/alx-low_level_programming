#include "main.h"
/**
 * _strpbrk - Finds the first occurrence of any character in a string
 * @s: The string to be searched
 * @accept: The string containing the characters to match
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int w;

	while (*s)
	{
		for (w = 0; accept[w]; w++)
		{
			if (*s == accept[w])
				return (s);
		}
	s++;
	}

	return ('\0');
}
