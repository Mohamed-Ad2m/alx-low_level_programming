#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char	ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
