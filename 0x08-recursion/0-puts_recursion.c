#include "main.h"

/**
 * _puts_recursion - This should Prints a string,then followed by a new line.
 * @k: The string to be printed
 */
void _puts_recursion(char *k)
{
	if (*k)
	{
		_putchar(*k);
		_puts_recursion(k + 1);
	}

	else
		_putchar('\n');
}
