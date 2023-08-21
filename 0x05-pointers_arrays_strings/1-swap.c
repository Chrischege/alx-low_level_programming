#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: first value
 * @b: second int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
