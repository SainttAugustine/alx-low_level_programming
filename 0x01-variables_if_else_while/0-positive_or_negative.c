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
printf("98ispositive\n");
else if (n == 0)
{
	printf("0iszero\n");
}
	else
{
	printf("-98isnegative\n");
}
	printf("/n");
	return (0);
}
