#include "main.h"
#include <string.h>

/**
 *  _atoi - converts string to an integer
 * @s: the string to convert
 *  Return: integer
 */
int _atoi(char *s)
{
	int x;
	unsigned int num = 0;
	int min = 0;
	int plus = 0;
	int l = strlen(s);

	for (x = 0; x < l; x++)
	{
		if (s[x] == '-')
			min++;
		if (s[x] == '+')
			plus++;
		if (s[x] >= '0' && s[x] <= '9')
		{
			if (min - plus == 0)
				num = (num * 10) + (s[x] - '0');
			else
				num = (num * 10) + -(s[x] - '0');
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
		}
	}
	return (num);
}
