#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: represents the string
 * Return: returns nothing
 */
void print_rev(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
	}
	for (j = j - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
