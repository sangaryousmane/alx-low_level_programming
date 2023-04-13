#include "main.h"
#include <stdlib.h>
/**
* free_grid - frees two dimensional array
* @grid: two dimensional grid
* @height: height of grid
* Return: void
*
**/
void free_grid(int **grid, int height)
{
int i = 0;

while (i < heigth)
{
free(grid[i]);
i++;
}
free(grid);
}
