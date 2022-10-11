#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
int get_len(int i);
char *str_cpy(char *dest, char *src);
/**
 * new_dog - a function that creates a new dog
 * get len of name + owner, malloc them, cpy name + owner to new
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tyson;

	if (name == NULL || age < 0  || owner == NULL)
		return (NULL);

	tyson = malloc(sizeof(dog_t));
	if (tyson == NULL)
		return (NULL);

	tyson->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (tyson->name == NULL)
	{
		free(tyson);
		return (NULL);
	}

	tyson->owner = malloc(sizeof(char) * (strlen(ownwer) + 1));
	if (tyson->owner == NULL)
	{
		free(tyson->name);
		free(tyson);
		return (NULL);
	}

	tyson->name = _strcopy(tyson->name, name);
	tyson->age = age;
	tyson->owner = _strcopy(tyson->owner, owner);

	return (tyson);
}
