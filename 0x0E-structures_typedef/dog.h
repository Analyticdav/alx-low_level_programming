#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This is a structure for my dog.
 * @name: Pointer to a char, representing my dog's name.
 * @age: Float value, representing my dog's age.
 * @owner: Pointer to a char, representing my  name.
 * Description: This structure defines a new data type 'struct dog'
 * that holds information about my dog, including its name, age, and owner.
 * Return: 0 (succes)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - The structure for the dog definition
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
