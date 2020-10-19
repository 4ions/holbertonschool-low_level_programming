#ifndef STRUCTS
#define STRUCTS
/**
 * struct dog - description for a pet
 * @name: pet name
 * @age: pet age
 * @owner: owner
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif

#ifndef INIT_DOG_H
#define INIT_DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
