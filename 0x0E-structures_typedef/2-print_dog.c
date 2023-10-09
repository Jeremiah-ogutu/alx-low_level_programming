#include <stdio.h>
#include "dog.h"
/**
 * print_dog - the fuction that prints struct of dog
 * @d:rep element
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\n", (d->name) ? d->name : "(nil)");
		printf("age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(NULL)");
	}
}
