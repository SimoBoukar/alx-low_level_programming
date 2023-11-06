#include<stdio.h>
#include"dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer of char
 * @name: pointer of char
 * @owner: pointer of char
 * @age: float
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
