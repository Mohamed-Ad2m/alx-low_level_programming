#include <unistd.h>

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: The string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	write(1, s++, 1);
	_puts_recursion(s);
}
