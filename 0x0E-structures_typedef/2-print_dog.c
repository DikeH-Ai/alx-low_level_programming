#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print struct values for dog struct
 * @d: struct variable
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else if (d->name == NULL)
		d->name = "(nil)";
	else if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
