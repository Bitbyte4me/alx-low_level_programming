#include "main.h"

/**
 * _strlen_recursion - Returns the string length
 * @s: The string to measured
 *
 * Return: The string length.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
