#include "dog.h"
#include <stdlib.h>

char *_strdup(char *str);
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *@str: string to be copied
 *
 * Return: pointer to a new string, NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *p;

	if (str == NULL)
		return (0);
	for (; str[i] != '\0'; i++)
		;
	i++;
/*      printf("%i",i);*/
	p = malloc(sizeof(char) * i);
	if (p == NULL)
		return (p);
	for (; j < i; j++)
		p[j] = str[j];
	return (p);
}



/**
 * new_dog - creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Return NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = _strdup(name);
	if (my_dog->name != NULL)
		my_dog->name = name;
	else
		free(my_dog);
	my_dog->age = age;
	my_dog->owner = _strdup(owner);
	if (my_dog->name != NULL)
		my_dog->owner = owner;
	else
		free(my_dog);
	return (my_dog);
}
