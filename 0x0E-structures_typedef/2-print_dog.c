#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - fuction that print the struct dog
 * @d: poinet of the type defined
 * Return: NOthing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		if ((*d).owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
