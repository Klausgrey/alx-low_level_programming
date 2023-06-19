#include "dog.h"

/**
 * my_strlen - my function that is akin to strlen.
 * @d: pointer to the first latter of the string
 * Return: the index
 */

int my_strlen(char *d)
{
	int i = 0;

	while (d[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * my_strcat - a function thats akin to the strcat function.
 * @dest: destination in which the string is copied.
 * @sour: the string thst is o be copied
 * Return: the dest.
 */

char *my_strcat(char *dest, char *sour)
{
	int len = 0, i;

	while (sour[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = sour[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creats a new dog.
 * @name: name of the dog
 * @age: age of the dog.
 * @owner: owner of the dog
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = my_strlen(name);
	len2 = my_strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	my_strcat(dog->name, name);
	my_strcat(dog->owner, owner);
	dog->age = age;
	return (dog);
}
