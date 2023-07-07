#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - find the number of bits to flip to change
 * one number to the other
 * @n: First number to check bits
 * @m: second number to check bits
 *
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nlen, mlen, flip, storen, storem;

	nlen = mlen = flip = 0;
	storen = n;
	storem = m;
	while (n > 0)
	{
		n = n >> 1;
		nlen++;
	}
	while (m > 0)
	{
		m = m >> 1;
		mlen++;
	}
	m = storem;
	n = storen;
	if (mlen > nlen)
	{
		while (mlen > 0)
		{
			if ((m & 1) != (n & 1))
				flip += 1;
			m = m >> 1;
			n = n >> 1;
			mlen--;
		}
	}
	else
	{
		while (nlen > 0)
		{
			if ((m & 1) != (n & 1))
				flip += 1;
			m = m >> 1;
			n = n >> 1;
			nlen--;
		}
	}
	return (flip);
}
