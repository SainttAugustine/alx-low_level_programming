#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to a string
 *
 * Return: integer value of string
 */

int _atoi(char *s)
{
int sign = 1;
int num = 0;

while (*s != '\0')
{
if (*s == '-')
sign *= -1;

if (*s >= '0' && *s <= '9')
{
num *= 10;
num += (*s - '0');
}

if (*s == '+' && *(s - 1) != '-')
break;

s++;
}

return (num * sign);
}
