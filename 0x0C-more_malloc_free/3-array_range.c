#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *blck;
	int a, b = 0;

	if (min > max)
		return (NULL);
	blck = malloc(sizeof(*blck) * ((max - min) + 1));
	if (blck != NULL)
	{
		for (a = min; a <= max; a++)
		{
			blck[b] = a;
			b++;
		}
		return (blck);
	}
	else
		return (NULL);

}
