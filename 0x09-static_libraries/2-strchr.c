#include "main.h"
#include <stdio.h>

/**
 *  _strchr - a fxn that locates a character in a string.
 *  @s: an input string to search
 *  @c: an input character to locate into string
 *
 *  Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
