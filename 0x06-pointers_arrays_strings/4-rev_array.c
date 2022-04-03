#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: an integer
 * @n: the number of items
 * Return: returns nothing
 */
void reverse_array(int *a, int n)
{
	int m;
	int tmp;

	for (m = 0; m < n--; m++)
	{
		tmp = a[m];
		a[m] = a[n];
		a[n] = tmp;
	}
}
