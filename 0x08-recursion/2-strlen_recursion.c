#include "main.h"

/**
 * _strlen_recursion - Returns the string length
 * @k: The string to measured
 *
 * Return: The string length.
 */
int _strlen_recursion(char *k)
{
	int len = 0;

	if (*k)
	{
		len++;
		len += _strlen_recursion(k + 1);
	}

	return (len);
}
