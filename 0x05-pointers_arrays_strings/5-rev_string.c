#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: input string
 * return: 0
 */
void re_string(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
}
