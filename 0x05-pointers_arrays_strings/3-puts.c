#include <unistd.h>
#include "main.h"
/**
 * _puts - returns a string
 * @str: represents the string
 * Return: returns nothing
 */
void _puts(char *str)
{
	int j = 0;

	while (*(str + j) != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

