#include <stdio.h>
#include "main.h"
/**
 *puts_half - returns the half of a string
 *@str: represents the string
 *Return: returns nothing
 */
void puts_half(char *str)
{
	int i = 0;
	char *c = str;
	int j;

	while (*c != '\0')
	{
		c++;
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i + 1) / 2;
	}
	for ( ; j < i ; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
