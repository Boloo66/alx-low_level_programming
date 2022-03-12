#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This fuction prints value and sign
 * @n: The number to be checked
 *
 * Description: This function below will
 * take a value n and show if its a 
 * positive or negative value
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is negative\n", n);

	else if (n == 0)
		printf("%d is zero\n", n);

	else
		printf("%d is positive\n", n);


	return (0);
}
