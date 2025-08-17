#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    // Allocate memory for the new dog structure
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    // Allocate memory for the name and owner, and copy them
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

    // Set the age of the dog
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

    // Free memory after use
    free(my_dog->name);
    free(my_dog->owner);
    free(my_dog);

    return (0);
}

