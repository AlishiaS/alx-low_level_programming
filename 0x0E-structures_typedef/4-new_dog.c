#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD

=======
>>>>>>> parent of f149737 (A door is what a dog is perpetually on the wrong side of)
/**
 * _strlen - determinates the length of a string
 * @s: pointer to string
 * Return: length
 */
int _strlen(char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
		;

	return (b);
}


/**
 * _strcpy - copies a pointed string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: the address of the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int b = 0;

	while (src[b] != '\0')
	{
		dest[] = src[b];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}


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
	int len_name, len_owner;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	
	len_name = _strlen(name);

	new_dog->name = malloc(sizeof(char) * len_name + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy(new_dog->name, name);

	len_owner = _strlen(owner);

	new_dog->owner = malloc(sizeof(char) * len_owner + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

<<<<<<< HEAD
	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;
=======
	new_dog->name = _strcopy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = _strcopy(new_dog->owner, owner);
>>>>>>> parent of f149737 (A door is what a dog is perpetually on the wrong side of)

	return (new_dog);
}
