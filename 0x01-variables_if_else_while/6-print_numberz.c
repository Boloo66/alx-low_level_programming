#include <stdio.h>
#include <stdlib.h>
/* Headers file used */

/**
 * main - prints numbers using putchar
 *
 * Description: prints numbers using only putchar function
 * return: returns zero when programme is completed
 */
int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 9)
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
