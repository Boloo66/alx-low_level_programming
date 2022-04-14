#include "main.h"

/**
 * sum_them_all - sum all arguments provided to the function
 *
 * @n: the number of elements to be added
 * Return: returns 0 if n==NULL
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	va_start(ap, n);
	if(n == NULL)
	{
		return(0);
	}
	int sum = 0;
	int i;
	for(i = 1; i <= n; i++)
	{
		sum += va_args(ap, int);
		return(sum);
	}
}
