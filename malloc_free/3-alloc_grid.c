#include "main.h"
/**
 * alloc_grid - main function
 * Description: grid
 * @width: cha
 * @height: chr
 * Return: p
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int **p = 0;
	int i;
	int x;

	if (width <= 0 || height <= 0)
		return (NULL);

	p =  malloc(sizeof(int *) * height);

		if (p == NULL)
			return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
			return (NULL);

		for (x = 0; x < width; x++)
			p[i][x] = 0;
	}
	return (p);
}
