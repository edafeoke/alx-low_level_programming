#include "holberton.h"

/**
 * rot13 - changes all letters of a string to leet.
 * @c: input characters
 *
 * Return: Pointer to characters
 */
char *rot13(char *c)
{
	char *alphas = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *codes = "nopqrstuvwxyzabcdefghijklmnNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;

	while (c[i] != '\0')
	{
		int j = 0;

		while (alphas[j] != '\0')
		{
			if (c[i] == alphas[j])
			{
				c[i] = codes[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (c);
}
