#include <dog.h>

/**
 * init_dog - initialize a varibale of type struct dog
 * @d: dog structure
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: void
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
