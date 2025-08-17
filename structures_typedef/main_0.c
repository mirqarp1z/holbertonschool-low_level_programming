#include <stdio.h>
#include <stdlib.h>
#include "4-new_dog.c"  // Include the file with the new_dog function

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
