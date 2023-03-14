#include "main.h"
/**
 * free_grid - main function
 * @grid: ch
 * @height: ch1
 * Description: free grid
 *
 */
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i< height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
