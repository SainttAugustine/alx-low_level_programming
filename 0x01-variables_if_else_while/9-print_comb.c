#include <stdio.h>

/**
* main - main function
*
* Return: always 0
*/

int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = i; j < 10; j++)
{
printf("%d,%d, ", i, j);
}
}
printf("\n");
return (0);
