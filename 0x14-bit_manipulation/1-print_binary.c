#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	char binary[256];
	int length = 0;

	do
	{
		if(n % 2 == 1)
			binary[length] = '1';
		else
			binary[length] = '0';
		length++;
		n = n / 2;
	}while(n != 0);
	binary[length] = '\0';

	int middle;
	middle = length / 2;
	for(int i = 0; i < middle; i++)
	{
		char temp = binary[i];
		binary[i] = binary[length - i - 1];
		binary[length - 1 - i] = temp;
	}
	int link;
	link = 0;
	while(binary[link] != '\0')
	{
		_putchar(binary[link++]);
	}

}
