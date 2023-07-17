#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: variable
 * @age: variable
 * @owner: variable
 * Return: pointer for new dog or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *namecopy;
	char *ownercopy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	namecopy = malloc(sizeof(char) * (strlen(name) + 1));
	if (namecopy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(namecopy, name);
	ownercopy = malloc(sizeof(char) * (strlen(owner) + 1));
	if (ownercopy == NULL)
	{
		free(namecopy);
		free(new_dog);
		return (NULL);
	}
	strcpy(ownercopy, owner);

	new_dog->name = namecopy;
	new_dog->age = age;
	new_dog->owner = ownercopy;
	return (new_dog);
}
