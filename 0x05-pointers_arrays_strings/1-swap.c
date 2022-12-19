#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @x: An integer to swap
 * @y: Another integer to swap
 *
 * Return: void
 */
void swap_int(int *x, int *y)
{
	int aux;

	aux = *x;
	*x = *y;
	*y = aux;
}
