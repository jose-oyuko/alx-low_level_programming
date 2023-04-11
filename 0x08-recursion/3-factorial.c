#include "main.h"
/**
 * factorial - Returns the factorial of a number
 * @n: number to be returned
 * Return: Factorial of n
 */
int factorial(int number)
{
	if (number < 0)
		return (-1);
	if (number == 0)
		return (1);
	return (number * factorial(number - 1));
}
