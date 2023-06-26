#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion(n, 1));
}

/**
 * sqrt - Calculates the natural square root
 * @n: number to calculate the square root
 * @i: iterate number
 * Return: the natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (sqrt(n, i + 1));
}
