#include "main.h"
/**
 * flip_bits - return amount of bits neede to flip in n to achieve m
 * @n: integer to be checked
 * @m: integer to be compared
 * Return: amount of bits o be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new = n ^ m;
	unsigned long int count = 0;

	while (new > 0)
	{
		new &= (new - 1);
		count++;
	}
	return (count);

}
