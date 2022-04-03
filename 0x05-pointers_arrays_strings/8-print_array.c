#include<stdio.h>
#include "main.h"
/**
 *print_array - prints the array
 *@a: represents the array
 *@n: the size of array
 *Return: returns nothing
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0 ; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
