#include "main.h"
/**
 * _strncat - concetenates twostrings with n bytes
 * @dest: destination
 * @src: source
 * @n: the number of bytes
 * Return: returns concetenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int dest_size = 0;

	while (dest[a++])
		dest_size++;

	for (a = 0; src[a] && a < n; a++)
		dest[dest_size++] = src[a];
	return (dest);
}
