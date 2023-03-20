#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - main function
 * Description: initialize
 * @d: ch1
 * @name: ch2
 * @age: ch3
 * @owner:ch4
 * Return: nth
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;


}

