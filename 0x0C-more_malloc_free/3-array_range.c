#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum
 * @max: maximum
 * Return: returns a  pointer
 **/
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; i++, min++)
		*(p + i) = min;
	return (p);
}
