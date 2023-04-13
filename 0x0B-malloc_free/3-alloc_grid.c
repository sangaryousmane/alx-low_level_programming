#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - make grid
 * @width: width
 * @height: height
 * Return: a pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{

int **arr2D;
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}
arr2D = malloc(sizeof(int *) * height);

if (arr2D == NULL)
{
return (NULL);
}
i = 0;
while (i < height)
{
arr2D[i] = malloc(sizeof(int) * width);

if (arr2D[i] == NULL)
{
for (; i >= 0; i--)
{
free(arr2D[i]);
}
free(arr2D);
return (NULL);
}
i++;
}
i = 0;
while (i < height)
{
for (j = 0; j < width; j++)
{
arr2D[i][j] = 0;
i++;
}
}
return (arr2D);
}
