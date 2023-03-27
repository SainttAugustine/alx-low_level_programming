#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
    int sum;
    char c;

srand(time(NULL));

sum = 0;

while (sum < 2772 - 122)
{
c = rand() % 94 + 33;
putchar(c);
sum += c;
}

putchar(2772 - sum);

return (0);
}
