#include "variadic_functions.h"
#include <stdarg.h>
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
    unsigned int sum = 0;

    unsigned int i;

    if (n == 0)
    {
        return (0);
    }
    
    for (i = 1; i <= n; i++)
    {
        sum += va_arg(ap, int);
    }
    va_end(ap);
    return (sum);
}
