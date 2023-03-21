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
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
