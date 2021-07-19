#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print a struct dog
 * @d: pointer to dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		(*d).name == NULL ?
			printf("Name: (nil)\n") :
			printf("Name: %s\n", (*d).name);
		(*d).age ?
			printf("Age: %f\n", (*d).age):
			printf("Age: (nil)\n");
		(*d).owner ?
			printf("Owner: %s\n", (*d).owner):
			printf("Owner: (nil)");
	}
}
