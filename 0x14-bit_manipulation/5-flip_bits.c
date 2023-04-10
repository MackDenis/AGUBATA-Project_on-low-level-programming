#include "main.h"

/**
 * flip_bits - return the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int count = 0;

	while (difference)
	{
		count += difference & 1;
		difference >>= 1;
	}

	return (count);
}
