#include "shell.h"

/**
 * bfree - Frees a pointer and sets the address to NULL.
 * @ptr: Address of the pointer to be freed.
 *
 * This function frees the memory allocated for the pointer's data and
 * sets the pointer's address to NULL to avoid potential access issues.
 *
 * Return: 1 if memory was freed, 0 otherwise.
 */
int bfree(void **ptr)
{
if (ptr && *ptr)
{
free(*ptr);
*ptr = NULL;
return 1;
}
return 0;
}
