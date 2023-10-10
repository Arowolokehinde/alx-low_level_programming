#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog- user defined data type
 * @name: variable name for char
 * @age: variable name for float
 * @owner: variable name for char
 * return: always success
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;


#endif
