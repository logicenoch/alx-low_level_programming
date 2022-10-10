#ifndef DOG
#define DOG

/**
 *struct dog - a structure that defines a dog.
 *@name: holds the name of the dog.
 *@age: holds the age of the dog.
 *@owner: holds the name of the owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
