#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the newly allocated memory containing a copy of the
 *         string str. Returns NULL if str is NULL or if memory allocation
 *         fails.
 *
 * This function allocates memory to store a duplicate of the input string 
 * and returns a pointer to the new memory space. The allocated memory can 
 * later be freed using the free() function. If str is NULL or if memory 
 * allocation fails, the function returns NULL. The length of the string is 
 * calculated using the custom my_length function, which manually counts the 
 * characters of the string until the null terminator is reached.
 */

char *_strdup(char *str)
{
    char *cp;
    unsigned int ln;
    unsigned int i;

    if (str == NULL)
    {
        return (NULL);
    }

    ln = my_length(str) + 1;

    cp = malloc(ln * sizeof(char));

    if (cp == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < ln; i++)
    {
        cp[i] = str[i];
    }

    return (cp);
}

/**
 * my_length - Calculates the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string (excluding the null terminator).
 *
 * 
 */

unsigned int my_length(char *s)
{
    unsigned int len = 0;

    while (s[len] != '\0')
    {
        len++;
    }

    return (len);
}

