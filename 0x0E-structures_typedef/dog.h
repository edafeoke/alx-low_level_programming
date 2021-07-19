#ifndef DOG
#define DOG

/**
 * struct dog - Structure of dog
 * @name: the name
 * @age: the age
 * @owner: name of the owner
 *
 * Description: Structure of a dog containing name , age
 * and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
