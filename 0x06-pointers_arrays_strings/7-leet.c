#include "holberton.h"

/**
 * leet - changes all letters of a string to leet.
 * @c: input characters
 *
 * Return: Pointer to characters
 */
char *leet(char *c)
{
	char *alphas = "AaEeOoLlTt";
	char *codes = "4433001177";
	int i = 0;

	while (c[i] != '\0')
	{
		int j = 0;

		while (alphas[j] != '\0')
		{
			if (c[i] == alphas[j])
			{
				c[i] = codes[j];
			}
			j++;
		}
		i++;
	}
	return (c);
}
