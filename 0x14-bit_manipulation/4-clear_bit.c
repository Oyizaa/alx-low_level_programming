#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: address of number to be updated
 * @index: position of bit to be changed to 1
 * Return: 1 if success, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n |= 1lu << index;

	return (1);
}
