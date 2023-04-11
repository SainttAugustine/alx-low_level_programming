#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory containing s1 followed by s2,
 *         NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	for (unsigned int i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (unsigned int i = 0; i < len2; i++)
		concat[len1 + i] = s2[i];
	concat[len1 + len2] = '\0';

	return (concat);
}
