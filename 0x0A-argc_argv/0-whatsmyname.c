#include <stdio.h>

/**
 * main - Prints the name of the program.
 * @argc: The number of command-line arguments (unused).
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 (Always success).
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
