#include "main.h"
/**
 * _strncpy - copies one string to another
 * @dest: destination
 * @src: source
 * @n: an integer value
 * Return: returns destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
