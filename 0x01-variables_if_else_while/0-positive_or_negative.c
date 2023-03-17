#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - main function
*
* Return: 0 if successful
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 0)
printf("98 is positive\n");
else if (n == 0)
{
	printf("0 is zero\n");
}
	else
{
	printf("-98 is negative\n");
}
	printf("/n");
	return (0);
}
