#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if n is a prime number
 * @n: int
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <2){
		return (0);
	}
	if (n == 2){
		return (1);
	}
	if (n % 2 == 0){
		return (0);
	}
	for (int i = 3; i*i <= n; i+= 2){
		if (n % i == 0){
			return (0);
		}
	}
	return (1);

}

/**
 * check_prime - check all number < n if they can divide it
 * @n: int
 * @resp: int
 * Return: int
 */


