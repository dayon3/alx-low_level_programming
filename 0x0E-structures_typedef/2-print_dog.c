#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: dog structure
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL) return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age ? d->age : "(nil)");
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
