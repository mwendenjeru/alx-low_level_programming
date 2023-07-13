#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocates memory for an array and sets it to zero
 * @nmemb: Number of elements to allocate
 * @size: Size of each element
 * Return: Pointer to the allocated memory
 * If nmemb or size is 0, returns NULL
 * If malloc fails, returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, total_size);
	return (ptr);
}
