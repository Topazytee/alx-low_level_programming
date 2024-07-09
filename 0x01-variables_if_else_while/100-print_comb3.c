#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int c, n;

	for (c = 48; c <= 56; c++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > c)
			{
				putchar(c);
				putchar(n);
				if (c != 56 || c != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
