#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 *  @b: An unsigned input integer
 *
 *  Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}