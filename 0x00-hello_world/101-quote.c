#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[60];

	strcpy(string, "and that piece of art is useful\" - Dora Korpar, 2015-10-19");

	for (int i = 0; i < strlen(string); i++)
	{
		putc(string[i], stderr);
	}
	putc('\n', stderr);
	return (1);
}


