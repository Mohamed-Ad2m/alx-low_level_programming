#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: A c program that prints to the standard error using write
 *
 * Return: 0 (Success)
 */

int     main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
