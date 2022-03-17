#include "main.h"
#include <stdio.h>
/* main header files*/

/**
 * print_to_98 - prints from a number till 98
 *
 * @n: holds the valur of a number
 * Return: returns the numbers
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for ( n = n; n < 98; n++)
		{
			printf("%d, ", n);
			printf("%d\n", 98);
		}
		else
		{
			for (n =n; n > 98; n--)
			{
				printf("d, ", n);
				printf("%d\n", 98);
			}
		}
	}
}
