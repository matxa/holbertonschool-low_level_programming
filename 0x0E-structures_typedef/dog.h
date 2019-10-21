#ifndef DOG
#define DOG

/**
 * struct dog - dog's info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
