#include <stdio.h>
#include "main.h"
/**
 *_memcpy - copy values from one memory area to another
 *@dest: destination memory area
 *@src: source memory area
 *@n: number of items to copy
 *Return: return dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
