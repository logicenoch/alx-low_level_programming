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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

