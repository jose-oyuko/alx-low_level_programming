#include "main.h"

int check_pal(char *s, int i, int len);
int _len(char *s);

/**
 * is_palindrome - Checks if a atring is a palindmore
 * @s: input string
 * Return: 1 if a string is palindmore and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _len(s)));
}

/**
 * _len - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _len(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
