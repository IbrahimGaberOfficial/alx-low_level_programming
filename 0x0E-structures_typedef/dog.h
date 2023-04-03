#ifndef _DOG_H
#define _DOG_H

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

#endif
