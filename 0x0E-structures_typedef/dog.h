#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - structure
 * @name: pointer of type char
 * @age: float
 * @owner: pointer of type char
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif /* _DOG_H */
