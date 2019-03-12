#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 * @d: address of the structure
 *
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
