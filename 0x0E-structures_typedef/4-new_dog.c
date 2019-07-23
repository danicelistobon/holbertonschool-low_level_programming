#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* _strlen - returns the length of a string
*
* @s: pointer
*
* Return: length
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
* *_strcpy - copies the string pointed
*
* @dest: pointer
*
* @src: pointer
*
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; *(src + c) != '\0'; c++)
	{
		*(dest + c) = *(src + c);
	}
	*(dest + c) = '\0';

	return (dest);
}

/**
* *new_dog - creates a new dog
*
* @name: dog name
*
* @age: dog age
*
* @owner: dog owner
*
* Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *cpname, *cpowner;
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	cpname = malloc(sizeof(char) * (_strlen(name) + 1));

	if (cpname == NULL)
	{
		free(newdog);
		free(cpname);
		return (NULL);
	}
	_strcpy(cpname, name);

	cpowner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (cpowner == NULL)
	{
		free(newdog);
		free(cpname);
		free(cpowner);
		return (NULL);
	}
	_strcpy(cpowner, owner);

	newdog->name = cpname;
	newdog->age = age;
	newdog->owner = cpowner;

	return (newdog);
}
