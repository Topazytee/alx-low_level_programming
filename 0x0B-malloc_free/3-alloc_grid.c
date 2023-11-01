#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **puppy;
	int p, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	puppy = malloc(sizeof(int *) * height);

	if (puppy == NULL)
		return (NULL);

	for (p = 0; p < height; p++)
	{
		puppy[p] = malloc(sizeof(int) * width);
		if (puppy[p] == NULL)
		{
			for (; p >= 0; p--)
				free(puppy[p]);

			free(puppy);
			return (NULL);
		}
	}

	for (p = 0; p < height; p++)
	{
		for (y = 0; y < width; y++)
			puppy[p][y] = 0;
	}

	return (puppy);
}
