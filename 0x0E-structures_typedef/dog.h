#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef of dog structure.
 */
typedef struct dog dog_t;

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
#endif
