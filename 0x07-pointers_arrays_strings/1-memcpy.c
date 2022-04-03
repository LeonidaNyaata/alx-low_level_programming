#include "main.h"
/**
 * _memcpy - copies the memory area
 * @dest: destination
 * @src: source
 * @n: an unsigned integer value
 * Return: returns destination
 */
void *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
