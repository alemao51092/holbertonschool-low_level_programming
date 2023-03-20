#ifndef dogh
#define dogh
/**
 * struct dog - main function
 * @name: ch
 * @age: ch1
 * @owner: ch2
 * Description: structur
 * Return: empty
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
