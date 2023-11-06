#include<stdio.h>
#include"dog.h"
#include<stddef.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer of dog to init
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nothing");
	else
	{
		printf("Name: %s\n", (*d).name != NULL ? (*d).name : "nil");
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner != NULL ? (*d).owner : "nil");
	}
}
