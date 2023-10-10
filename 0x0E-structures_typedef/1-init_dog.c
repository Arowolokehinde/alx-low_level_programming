#include "dog.h"
#include <stdio.h>

/**
 * init_dog- function that initialize a variable of type
 * @d: struct name
 * @name: variable for char
 * @age: variable for float
 * @owner: variable for char
 * return: always success
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
