#include <stdio.h>
#include "main.h"
/**
 *puts2 - prints every character
 *@str: represents the character
 *Return: returns nothing
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *c = str;
	int m;

	while (*c != '\0')
	{
		c++;
		i++;
	}
	j = i - 1;
	for (m = 0 ; m <= j ; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
	}
	_putchar('\n');
}
