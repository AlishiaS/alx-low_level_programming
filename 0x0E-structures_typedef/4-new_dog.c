#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - create new data structure for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = _strcpy(new_dog->owner, owner);

	return (new_dog);
}


/**
 * _strlen - determinates the length of a string
 * @s: pointer to string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}


/**
 * _strcpy - copies a pointed string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: address of the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int b = 0;

	while (src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	dest[b] = '\0';

	return (dest);
}
