#include "main.h"
#include <unistd.h>

/**
 * main - write the character c to stdout
 * gc: the character to print
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
