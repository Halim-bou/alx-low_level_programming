#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that print struct dog
 * @d: a poinetr of struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n", d->name);
		else
			printf("Name: %s\n", d->name);
		printf("Age: %s\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n", d->owner);
		else
			printf("Owner: %s\n", d->owner);
	}
}
