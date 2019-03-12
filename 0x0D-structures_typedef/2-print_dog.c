#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: structure address
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %p\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %p\n", d->owner);
	}
}
