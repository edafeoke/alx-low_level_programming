#include "holberton.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * @haystack: haystack
 * @needle: needle
 *
 * Return: needle in haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int l = 0;
	char *tmp;
	
	while (*needle)
	{
		*tmp = *needle;
		l++;
		needle++;
		tmp++;
	}
	while (*haystack)
	{
		int i;

		for (i = 0; i < l; i++)
		{
			if (haystack[i] != tmp[i])
			{
				break;
			}
		}
		haystack++;
	}
	return (NULL);
}
