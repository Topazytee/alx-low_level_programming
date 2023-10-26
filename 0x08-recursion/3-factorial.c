#include "main.h"

/**
 * factorial - Calculates the factorial of a number
 * @s: The number to calculate the factorial of
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
