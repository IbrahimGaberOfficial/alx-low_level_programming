#include "dog.h"

/**
 * init_dog - function to initioaliza sturct of type dog
 *
 * @d: pointer to struct dog
 * @name: pointer to name of dog
 * @age: age
 * @owner: owenr of dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
