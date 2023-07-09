#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints its name, followed by a new line.
 * @argc: arguement count.
 * @argv: argument value, a strings that come after calling fxn.
 *
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
