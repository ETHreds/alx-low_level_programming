#ifndef _DOG_H
#define _DOG_H

/**
 *struct dog- dog information
 *@name: dog's nmae
 *@age: dog's age
 *@owner: dogs owner name
 *
 *Description: just a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *dog_t- typedrf for struct dog
 */

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
