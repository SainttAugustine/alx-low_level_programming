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
	int i = 0;
	for (; n > 0; i+++)
	{
		s[i] = b;
		n--;
	}
	
	return (s);
}
