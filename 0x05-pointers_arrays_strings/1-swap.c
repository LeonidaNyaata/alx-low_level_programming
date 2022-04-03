#include "main.h"
/**
 * swap_int - swaps two integers's values
 * @a: one of the integers
 * @b: the second integer
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
