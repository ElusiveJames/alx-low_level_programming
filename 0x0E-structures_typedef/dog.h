#ifndef HEADER_FILE
#define HEADER_FILE
/**
  *struct dog - structure of a dog
  *@name: name of the dog
  *@age: age parameter
  *@owner: who own the dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
