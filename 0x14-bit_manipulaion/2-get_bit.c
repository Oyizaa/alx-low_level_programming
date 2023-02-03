#include "main.h"
/**
 * get_bit - get the value of a bit at a given index.
 * @n: Number to search in
 * @index: Position of bit
 * Return: Value of bit @index in @n
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	if ((n >> index) & 1lu)
		return (1);
	else
		return (0);
}
