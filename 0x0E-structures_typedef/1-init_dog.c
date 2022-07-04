#include <stdlib.h>
#include "dog.h"

/**
 *init_dog-initializes struct dog
 *@d:pointer to struct dog
 *@name:dogs name
 *@age: dogs age
 *@owner: owner of th edog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
