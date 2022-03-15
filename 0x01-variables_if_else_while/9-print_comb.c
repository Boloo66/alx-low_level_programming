#include <stdio.h>
#include <stdlib.h>
/* Header files for this project */

/**
 * main- prints characters
 *
 * Description: This just prints
 * Return: returns characters and numbers
 */
int main(void)
{
	int i;

	for (i = 'i'; i <= '8'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
