#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dogs
 * @d: a pointer of struct
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
