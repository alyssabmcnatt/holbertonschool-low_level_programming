#include "main.h"

/**
 * set_bit - set the value of a bit to 1
 * @n: pointer to the bit to be manipulated
 * @index: position fo the bit to be manipulated
 * Return: 1 if success, -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
