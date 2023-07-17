#ifndef BIBLI
#define BIBLI
/**
 * struct dog - Define a new type struct dog with the following elements:
 * @name : variable
 * @age : variable
 * @owner : variable
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
