#ifndef DOG_H
#define DOG_H

/**
 * struct dog- variable name
 * @name: variable for char
 * @age: variable for float
 * @owner: variable for char
 * return: always success
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
