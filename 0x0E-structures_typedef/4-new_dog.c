#include"dog.h"
#include<stdlib.h>
/**
 * new_dog - ...
 * @name: ...
 * @age: ...
 * @owner: ...
 * Return: ...
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t i, j, k;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		;
	i++;
	dog->name = malloc(sizeof(char) * i);
	if (dog->name == NULL)
	{
		free(dog->name);
		free (dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		dog->name[k] = name[k];
	dog->age = age;
	for (j = 0; owner[j] != '\0'; j++)
		;
	j++;
	dog->owner = malloc(sizeof(char) * j);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		dog->owner[k] = owner[k];
	return (dog);
}

