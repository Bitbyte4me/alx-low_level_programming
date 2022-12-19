#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @q: String to count
 * Return: String length
 *
 */
int _strlen(char *q)
{
	int c = 0;

	for (; *q != '\0'; q++)
	{
		c++;
	}

	return (c);
}
