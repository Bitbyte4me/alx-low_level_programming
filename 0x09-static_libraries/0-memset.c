#include "main.h"

/**
 * _memset -  fxn that fills memory with constant bytes
 * @s: location to fill.
 * @b: character to fill location with.
 * @n: number of bytes to fill.
 *
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}

	return (start);
}
