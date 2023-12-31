#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - this is the data type
 * @name: member 1 of the struct
 * @age: member 2 of the struct
 * @owner: member 3 of the struct
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
dog_t *new_dog(char *name, float age, char *owner);

#endif
