#include <unistd.h>

/**
 * puts2 - prints every other character of a string,
 *		   starting with the first character
 * @str: The string
 */
void puts2(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
