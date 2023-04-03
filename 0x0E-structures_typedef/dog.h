#ifndef _DOG_H
#define _DOG_H

#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - struct for object dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: longer descripton
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


typedef struct dog dog_t;

#endif
