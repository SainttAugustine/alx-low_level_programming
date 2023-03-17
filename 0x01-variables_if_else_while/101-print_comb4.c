#include <stdio.h>

/**
* main - main function
*
* Return: always 0
*/

int main()
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
for (k = j + 1; k < 10; k++)
{
if (i != j && i != k && j != k)
{
printf("%d%d%d,", i, j, k);
break;
}
}
}
}
printf("\b\b\n");
return (0);
}
