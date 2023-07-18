#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - This function prints my dog'sbinformation
 * @d: My dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	else
	printf("Age: %f\n", d->age ? d->age : 0.0);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
