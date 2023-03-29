#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: If str1 < str2, the negative difference of the first unmatched characters. 
 * If str1 == str2, 0. 
 * If str1 > str2, the positive difference of the first unmatched characters. 
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' &&
s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
}
return (s1[i] - s2[i]);
}
