#include "main.h"

/**
 * main - check the code
 * @s: source
 * @c: character
 *
 * Return:  char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return (NULL);
	}
}
