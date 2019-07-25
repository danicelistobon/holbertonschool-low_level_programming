#ifndef _DOG_H_
#define _DOG_H_
/**
* struct dog - information of a dog
*
* @name: dog name
*
* @age: dog age
*
* @owner: dog owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif