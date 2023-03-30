#include "main.h"
/**
 * _strlen - returning the length of a string
 * @s: string length to be printed
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
