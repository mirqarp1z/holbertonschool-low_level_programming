#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    // Allocate memory for the name and copy the string
    new_dog->name = malloc(strlen(name) + 1);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }
    strcpy(new_dog->name, name);

    // Allocate memory for the owner and copy the string
    new_dog->owner = malloc(strlen(owner) + 1);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }
    strcpy(new_dog->owner, owner);

    new_dog->age = age;

    return (new_dog);
}
