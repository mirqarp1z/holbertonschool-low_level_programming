#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the newly allocated memory containing a copy of the
 *         string str. Returns NULL if str is NULL or if memory allocation
 *         fails.
 *
 * Description: This function allocates memory to store a duplicate of the
 *              input string and returns a pointer to the new memory space.
 *              The allocated memory can later be freed using the free()
 *              function. If str is NULL or if memory allocation fails, the
 *              function returns NULL.
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

	ln = strlen(str);

	cp = malloc(ln * sizeof(char));

	if (cp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= ln; i++)
	{
		cp[i]=str[i];
	}
	return (cp);
}
