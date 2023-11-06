#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - structure
 * @name: pointer of type char
 * @age: float
 * @owner: pointer of type char
*/

typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H */
