#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int rs = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
	if (b[i] != '0' && b[i] != '1')
		return (0);

	rs = rs << 1;
	if (b[i] == '1')
		rs += 1;

	i++;
	}
	return (rs);
}
