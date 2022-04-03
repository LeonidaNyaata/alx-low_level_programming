#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns the lenth of a string
 * @s: represents the string
 * Return: return string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
