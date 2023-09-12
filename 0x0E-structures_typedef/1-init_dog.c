#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: A pointer to the variable to be initialized.
 * @name: The name to be assigned to the dog.
 * @age: The age to be assigned to the dog.
 * @owner: The owner to be assigned to the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
