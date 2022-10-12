#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - the function that initializes a variable
 * @d: the variable name
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}
