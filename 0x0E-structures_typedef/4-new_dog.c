#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *dest, char *src);
int _strlen(char *str);

/**
 * new_dog - creat a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: the owner of the new dog
 * Return: a pointer to dog_t or NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *N_dog;
	int len1 = 0, len2 = 0;

	if (name != NULL && owner != NULL)
	{
		len1 = _strlen(name) + 1;
		len2 = _strlen(owner) + 1;

		N_dog = malloc(sizeof(dog_t));
		if (N_dog == NULL)
			return (NULL);
		N_dog->name = malloc(sizeof(char) * len1);
		if (N_dog->name == NULL)
		{
			free(N_dog);
			return (NULL);
		}
		N_dog->owner = malloc(sizeof(char) * len2);
		if (N_dog->owner == NULL)
		{
			free(N_dog->name);
			free(N_dog);
			return (NULL);
		}
		N_dog->name = _strcpy(N_dog->name, name);
		N_dog->owner = _strcpy(N_dog->owner, owner);
		N_dog->age = age;
	}

	return (N_dog);
}

/**
 * _strcpy - copy the string
 * @dest: destination
 * @src: source of string
 * Return: a pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - length of string
 * @str: string to length
 *
 * Return: the result of length
 */
int _strlen(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		str++;
	}
	return (i);
}
