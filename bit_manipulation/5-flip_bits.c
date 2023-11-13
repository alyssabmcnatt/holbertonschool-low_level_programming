#include "main.h"

/**
 * flip_bits - function that returns the number of bits needed
 * @n: first number to compare
 * @m: second number to compare
 * Return: number of bits you would like to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}

	return (count);
}
