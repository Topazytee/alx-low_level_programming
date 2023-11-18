#include <stdio.h>

void hareTortoise(void) __attribute__ ((constructor));

/**
 * hareTortoise - print the constructor attribute to hareTortoise()
 * is executed before main()
 */

void hareTortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
