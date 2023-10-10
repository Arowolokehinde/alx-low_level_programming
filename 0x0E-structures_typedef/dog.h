#ifndef DOG_H
#define DOG_H

/**
 * struct dog- variable name
 * @name: variable for char
 * @age: variable for float
 * @owner: variable for char
 * return: always success
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
