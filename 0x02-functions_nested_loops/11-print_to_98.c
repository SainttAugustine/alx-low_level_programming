#include "main.h"
#include <stdio.h>

void print_to_98(int n);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


/**
 * print_to_98 - prints all natural numbers from n to 98, and a new line.
 * @n: starting number.
 *
 * Return: void.
 */

void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
printf("\n");
}
