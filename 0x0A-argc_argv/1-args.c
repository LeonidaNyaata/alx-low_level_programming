#include <stdio.h>
/**
 * main - entry point
 * @argc: argument number
 * @argv: argument strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argc[%d]: %s\n". i, argv[i]);
	}
	return (0);
}
