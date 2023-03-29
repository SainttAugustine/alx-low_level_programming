#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: destination string.
* @src: source string.
* @n: maximum number of bytes to use from src appended to dest
* Return: concatenated string
*/ 

char *_strncat(char *dest, char *src, int n)
{
int deslen = 0;
int srclen = 0;
int i;
  
for (i = 0 ; dest [i] != '\0' ; i++)
destlen++;
for (i = 0 ; src [i] != '\0' ; i++) 
srclen++
for (i = 0 ; i < n ; i++)
dest[deslen + i] = src [i]
return (dest);
}
