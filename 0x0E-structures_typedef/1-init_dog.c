#include "dog.h"
#include <stdlib.h>
/**
* init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog variable to be initialized.
 * @name: Pointer to a char, representing the dog's name.
 * @age: Float value, representing the dog's age.
 * @owner: Pointer to a char, representing the owner's name.
 *
 * Description: This function takes a pointer to a struct dog
 * and initializes its
 * members with the provided values for the dog's name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
