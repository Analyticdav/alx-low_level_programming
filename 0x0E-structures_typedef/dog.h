#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about my dog.
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

#endif
