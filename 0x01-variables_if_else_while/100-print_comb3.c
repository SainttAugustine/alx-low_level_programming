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
for (j = i + 1; j < 10; j++) 
{
if (i < j) 
{
printf("%d, %d", i, j);
} 
else 
{
printf("%d, %d", j, i);
}
if (i != 8 || j != 9) 
{
printf(", ");
}
}
}
return (0);
}
