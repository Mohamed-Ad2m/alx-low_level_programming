/**
 * _strcmp - Compare 2 strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 0, if the s1 and s2 are equal;
 *		   a negative value if s1 is less than s2;
 *		   a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
