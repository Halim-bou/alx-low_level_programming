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
	dog_t *new_dog;
	int len1 = 0, len2 = 0;

	if (name != NULL && owner != NULL)
	{
		len1 = _strlen(name) + 1;
		len2 = _strlen(owner) + 1;

		new_dog = malloc(sizeof(dog_t));
		if (new_dog == NULL)
			return (NULL);
		new_dog->name = malloc(sizeof(char) * len1);
		if (new_dog->name == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		new_dog->owner = malloc(sizeof(char) * len2);
		if (new_dog->owner == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
		new_dog->name = _strcpy(new_dog->name, name);
		new_dog->owner = _strcpy(new_dog->owner, owner);
		new_dog->age = age;
	}

	return (new_dog);
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
	dest[i++] = '\0';
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
	return (str);
}
