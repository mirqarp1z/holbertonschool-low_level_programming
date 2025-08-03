#include "main.h"

/**
 * _strncat - string birlesdirir el cek betty dahaaa yormaa nolarrki
 * @dest: Destination string
 * @src: Source string
 * @n: nnnnnn
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
