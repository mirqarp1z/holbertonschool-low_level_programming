#include "main.h"

/**
 * _strcmp - Bettymmmm
 * @s1: birinci stringimiz
 * @s2: ikinci stringimizz
 *
 * Return: return edir
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (s1[i] - s2[i]);
}
