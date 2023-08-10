#include "main.h"

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*
*Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *blck;
	unsigned int z;

	if (nmemb == 0 || size == 0)
		return (NULL);
	blck = malloc(nmemb * size);
	if (blck != NULL)
	{
		for (z = 0; z < (nmemb * size); z++)
			blck[z] = 0;
		return (blck);
	}
	else
		return (NULL);
}
