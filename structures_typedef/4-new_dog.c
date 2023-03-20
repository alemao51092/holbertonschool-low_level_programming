#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy - main function
 * Description: copy
 * @dest: char
 * @src: ch
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - main function
 * @name: ch
 * @age: ch1
 * @owner: ch2
 * Description: copy
 * Return: nth
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoop;
	char *copyna, *copyow;
	int countn = 0, countow = 0;

	snoop = malloc(sizeof(dog_t));

	if (snoop == NULL)
	{
		free(snoop);
		return (NULL);
	}
	while (name[countn])
	{
		countn++;
	}
	while (owner[countow])
	{
		countow++;
	}
	copyna = malloc(countn + 1);
	if (copyna == NULL)
	{
		free(copyna);
		return (NULL);
	}
	copyow = malloc(countow + 1);
	if (copyow == NULL)
	{
		free(copyna);
		free(copyow);
		free(snoop);
		return (NULL);
	}
	_strcpy(copyna, name);
	_strcpy(copyow, owner);
	snoop->name = copyna;
	snoop->age = age;
	snoop->owner = copyow;

	return (snoop);
}
