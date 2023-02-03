#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: address of number to be updated
 * @index: position of bit to be changed to 0
 * Return: 1 if success, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
