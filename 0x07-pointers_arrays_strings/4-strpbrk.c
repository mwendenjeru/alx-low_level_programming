#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the bytes to search for
 * Return: a pointer to the byte in
 * s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*p == *s)
				return (s);
			p++;
		}
		s++;
	}
	return (NULL);
}
