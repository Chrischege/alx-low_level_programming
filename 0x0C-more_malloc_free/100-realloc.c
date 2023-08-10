#include "main.h"


/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to the address of the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tem_blck;
	unsigned int f;

	if (ptr == NULL)
	{
		tem_blck = malloc(new_size);
		return (tem_blck);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		tem_blck = malloc(new_size);
		if (tem_blck != NULL)
		{
			for (f = 0; f < min(old_size, new_size); f++)
				*((char *)tem_blck + f) = *((char *) ptr + f);
			free(ptr);
			return (tem_blck);
		}
		else
			return (NULL);
	}
}
