#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int l = strlen(s);
	char *c = malloc(l + 1);
	int x = 0;

	c[l] = '\0';

	while (l > 0)
	{
		l--;
		c[x] = s[l];
		x++;
	}
	strcpy(s, c);
	free(c);
}
