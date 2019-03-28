#include "holberton.h"

/**
 * count_set_bits - counts num of bits to be flipped.
 * @n: number to be flipped.
 * Return: count.
 */
int count_set_bits(unsigned int n)
{
	unsigned int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}

/**
 * flip_bits - counts the number of bits to change to get from
 * one no. to another.
 * @n: first no.
 * @m: second no.
 * Return: returns number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k;

	k = n ^ m;

	return (count_set_bits(k));

}
