#include "main.h"
/**
 * sqtRecursive - calculates the squareroot recursively
 * @start: inital number
 * @end: last number
 * @m: an integer value
 * Return: gives the squareroot
 **/
int sqtRecursive(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == m)
			return (mid);

		if (mid * mid > m)
			return (sqtRecursive(start, mid - 1, m));
		if (mid * mid < m)
			return (sqtRecursive(mid + 1, end, m));
	}
	return (-1);
}
/**
 * _sqrt_recursion - finds the natural squareroot of a number
 * @n: an integer value
 * Return: squareroot of number
 **/
	int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqtRecursive(2, n, n));
}
