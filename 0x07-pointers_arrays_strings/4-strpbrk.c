#include "main.h"
/**
 * _strpbrk - searches string for bytes
 * @s: string
 * @accept: another string
 * Return: returns pointer to string accept
 */
char *_strpbrk(char *s, char *accept)
	{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
