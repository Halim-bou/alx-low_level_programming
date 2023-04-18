#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creat a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: the owner of the new dog
 * Return: a pointer to dog_t or NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *N_name;
	char *N_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	N_name = malloc((strlen(name) + 1) * sizeof(*name));
	if (N_name == NULL)
	{
		free(N_name);
		return (NULL);
	}
	N_owner = malloc((strlen(owner) + 1) * sizeof(*owner));
	if (N_owner == NULL)
	{
		free(N_owner);
		free(N_name);
		return (NULL);
	}
	strcpy(N_name, name);
	strcpy(N_owner, owner);

	new_dog->name = N_name;
	new_dog->owner = N_owner;
	new_dog->age = age;

	return (new_dog);
}
