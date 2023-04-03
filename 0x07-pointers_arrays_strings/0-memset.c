#include "main.h"
#include <stdio.h>

/**
 * _memset - fills a block of memory with specific value
 * @s: strarting address of memory being filled
 * @b: the desired value
 * @n: the number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
