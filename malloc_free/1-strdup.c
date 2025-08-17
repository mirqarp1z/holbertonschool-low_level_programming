#include "main.h"
#include <stdlib.h>

/**
 * my_length - Calculates the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
unsigned int my_length(char *s);

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated memory, or NULL if failed.
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

unsigned int my_length(char *s)
{
    unsigned int len = 0;

    while (s[len] != '\0')
    {
        len++;
    }

    return (len);
}

