#include "main.h"
/**
 * _strlen - calculates lenght of a string
 * @s: char target
 * Return: nothing
 */

int _strlen(char *s)
{
	int cnt, in;

	in = 0;

	for (cnt = 0; s[cnt] != '\0'; cnt++)
	in++;

return (in);
}
