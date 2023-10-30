#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - dynamically allocate memory for a 2D grid
 * @width: width input
 * @height: height input
 * Return: pointer to a 2D array or NULL if allocation fails
 */
int **alloc_grid(int width, int height)
{
    int **mee;  // Pointer to a pointer for the 2D grid
    int x, y;   // Loop counters

    // Check if width or height is non-positive
    if (width <= 0 || height <= 0)
        return (NULL);

    // Allocate memory for an array of int pointers (rows)
    mee = malloc(sizeof(int *) * height);

    if (mee == NULL)
        return (NULL);

    // Allocate memory for each row (array of ints)
    for (x = 0; x < height; x++)
    {
        mee[x] = malloc(sizeof(int) * width);

        if (mee[x] == NULL)
        {
            // Free previously allocated memory on failure
            for (; x >= 0; x--)
                free(mee[x]);
            free(mee);
            return (NULL);
        }
    }

    // Initialize the elements of the grid to 0
    for (x = 0; x < height; x++)
    {
        for (y = 0; y < width; y++)
            mee[x][y] = 0;
    }

    return (mee);  // Return a pointer to the 2D array
}
