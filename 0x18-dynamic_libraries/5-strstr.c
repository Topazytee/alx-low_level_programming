#include "main.h"
/**
 * _strstr - Finds the first occurrence of a substring in a string
 * @haystack: The string to be searched
 * @needle: The substring to search for
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *z = needle;

		while (*a == *z && *z != '\0')
		{
			a++;
			z++;
		}
		if (*z == '\0')
			return (haystack);
	}
	return (0);
}
