#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creat a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: pointer the new dog defined
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i = 0, len1 = 0, len2 = 0;
	char *n_name, *n_owner;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[len1])
		len1++;
	while (owner[len2])
		len2++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	n_name = malloc(len1 + 1);
	if (n_name == NULL)
		return (NULL);
	while (name[i])
	{
		n_name[i] = name[i];
		i++;
	}
	n_name[i] = '\0';
	n_owner = malloc(len2 + 1);
	i = 0;
	if (n_owner == NULL)
		return (NULL);
	while (owner[i])
	{
		n_owner[i] = owner[i];
		i++;
	}
	n_owner[i] = '\0';

	(*new_dog).name = n_name;
	(*new_dog).age = age;
	(*new_dog).owner = n_owner;
	return (new_dog);
}
