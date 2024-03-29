#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a fxn given as
 * a parameter on each element of an array.
 * @array: The array.
 * @size: The size of an array.
 * @action: A pointer to the fxn to be executed.
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
