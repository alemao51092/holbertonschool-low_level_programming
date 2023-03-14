#include "main.h"
/**
 * free_grid - main function
 * @grid: ch
 * @height: ch1
 * Description: free
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
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
		{
			free_grid(p, i);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			p[i][x] = 0;
	}
	return (p);
}
