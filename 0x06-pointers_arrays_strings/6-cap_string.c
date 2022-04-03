#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @n: represents string
 * Return: returns string
 */
char *cap_string(char *n)
{
	int m = 0;

	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}
	for (m = 0; n[m] != '\0'; m++)
	{
		switch (n[m])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (n[m + 1] > 96 && n[m + 1] < 123)
				{
					n[m + 1] = n[m + 1] - 32;
				}
		}
	}
	return (n);
}
