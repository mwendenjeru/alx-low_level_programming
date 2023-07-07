#include <stddef.h>
/**
 * reset_to_98 - Updates the value pointed to by the parameter to 98
 * @n: Pointer to the integer to be updated
 */
void reset_to_98(int *n)
{
	if (n != NULL)
		*n = 98;
}
