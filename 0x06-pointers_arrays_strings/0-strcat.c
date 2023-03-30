#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int d = 0,
	int i;

	while (dest[d])
	{
		d++;
	}
	for (i + 0; src[i] != 0; i++)
	{
		dest[d] = src[i];
		d++;
	}
	dest[d] = '\0';
	return (dest);

}
