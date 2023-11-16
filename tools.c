#include "shell.h"
/**
 * freearray2D - Frees the memory allocated for a two-dimensional char array.
 *
 * @arr: Double pointer to the two-dimensional character array.
 *
 * Frees the memory for each row of the array and the entire array itself.
 */
void freearray2D(char **arr)
{
	int i;

	if (!arr)
		return;

	for (i = 0; arr[i]; i++)
	{
		free(arr[i]);
		arr[i] = NULL;
	}

	free(arr), arr = NULL;
}
