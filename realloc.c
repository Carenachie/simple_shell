#include "shell.h"

/**
* _memset - Fills a block of memory with a given byte value.
* @s: Pointer to the memory area to be filled.
* @b: The byte value to fill @s with.
* @n: The number of bytes to fill.
* Return: A pointer to the memory area @s.
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}

/**
* ffree - Frees an array of strings along with the array itself.
* @pp: The array of strings to be freed.
*/
void ffree(char **pp)
{
char **a = pp;

if (!pp)
return;
while (*pp)
free(*pp++);
free(a);
}

/**
* _realloc - Reallocates a memory block with a new size.
* @ptr: Pointer to the previously allocated memory block.
* @old_size: Size of the previous memory block in bytes.
* @new_size: Size of the new memory block in bytes.
*
* Return: Pointer to the reallocated memory block.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;

if (!ptr)
return (malloc(new_size));
if (!new_size)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
return (ptr);

p = malloc(new_size);
if (!p)
return (NULL);

old_size = old_size < new_size ? old_size : new_size;
while (old_size--)
p[old_size] = ((char *)ptr)[old_size];
free(ptr);
return (p);
}

