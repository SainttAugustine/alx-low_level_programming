#include <stdio.h>

/**
* main - main function
*
* Return: always 0
*/

int main(void)
{
char digits[ ] = "0123456789\n";
int i;
for (i = 0; i < 11; i++) {
putchar(digits[i]);
}
return (0);
}
