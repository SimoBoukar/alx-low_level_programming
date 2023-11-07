#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - structure
 * @name: pointer of type char
 * @age: float
 * @owner: pointer of type char
 * Description: Longer description
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - typedef for struct dog
*/

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char * _strcpy(char *destination, char *source);
int _strlen(const char *string);
void free_dog(dog_t *d);

#endif /* _DOG_H */
