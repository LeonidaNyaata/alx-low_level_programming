#include "main.h"

/**
 * _memset - fills memory
 * @s: pointer
 * @b: constant byte
 * @n: an unsigned integer
 * Return: returns pointer
 */
void *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
