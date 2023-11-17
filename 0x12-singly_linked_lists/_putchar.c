#include <unistd.h>

/**
 * _putchar - writes the character to the standard output stream
 * @c: The character to be written
 *
 * Return: On success, returns 1
 * On error, returns -1 and sets the `errno` variable appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
