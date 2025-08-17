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

    new_dog->name = strdup(name);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    new_dog->owner = strdup(owner);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

    new_dog->age = age;

    return (new_dog);
}

int main(void)
{
    dog_t *my_dog = new_dog("Buddy", 3.5, "Alice");

    if (my_dog == NULL)
    {
        printf("Failed to create a new dog.\n");
        return (1);
    }

    printf("Dog's name: %s\n", my_dog->name);
    printf("Dog's age: %.2f\n", my_dog->age);
    printf("Dog's owner: %s\n", my_dog->owner);

    free(my_dog->name);
    free(my_dog->owner);
    free(my_dog);

    return (0);
}

