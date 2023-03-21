#ifndef MY_HEADER_FILE_H
#define MY_HEADER_FILE_H

/**
 * struct dog - dog info
 *
 * @name: dog's name
 * @age: dog's age in dog years :)
 * @owner: dog's owner
 *
 * Description: This gives the details of the dog, name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
