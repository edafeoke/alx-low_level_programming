#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (!p)
	{
		free(p);
		return (NULL);
	}
	(*p).name = name;
	(*p).age = age;
	(*p).owner = owner;
	return (p);
}
