#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - the structur for personified data ty[pe
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
