#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define new type
 * @name: Dog name
 * @age: Dog age
 * @owner: The Dog owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
#endif
