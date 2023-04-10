#include "main.h"

/**
 * flip_bits - returns the number of bit you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bit.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counts;

	for (counts = 0; n || m; n >>= 1, m >>= 1)

	{
		if ((n & 1) != (m & 1))
			counts;
	}
	return (counts);
}
