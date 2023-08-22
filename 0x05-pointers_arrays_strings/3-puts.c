#include "main.h"
/**
 *_puts - prints a string to stdout
 *@str: char target
 *
 *Return: nothing
 */

void _puts(char *str)
{
	while (*str)
		_putchar(&str++);

	_putchar(*str++);
}
