#include "main.h"
/**
 * sqtRecursive - calculates the squareroot recursively
 * @n: an integer
 * @m: comparison number
 * Return: 1 if not found sqrroot, else sqrroot
 **/
int sqtRecursive(int n, int m)
{
	if (n <= 0)
		return (-1);
	if (n * n == m)
		return (n);
	return (sqtRecursive(n - 1, m));
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: an integer
 * Return: returns the squareroot
 **/
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqtRecursive(n / 2, n));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: an integer value
 * Return: returns a prime number
 **/
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
}
