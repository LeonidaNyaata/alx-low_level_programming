#include <stdio.h>
#include "main.h"
/**
 *rev_string - reverses a string
 *@s: represents the string
 *Return: returns nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char *c = s;
	int m = 0;
	int n;
	char k;

	while (*c != '\0')
	{
		c++;
		i++;
	}
	j = i - 1;
	for ( ; m < ((j / 2) + 1) ; m++)
	{
		n = (j - m);
		k = s[m];
		s[m] = s[n];
		s[n] = k;
	}
}
