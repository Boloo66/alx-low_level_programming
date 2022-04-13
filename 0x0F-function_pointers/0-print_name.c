#include "function_pointers.h"
/* print_name - function prints the name on stdout
 *
 * @name: pointer to a string
 * @f: function pointer
 *
 * Return: No return value
 */

void print_name(char *name, void (*f)(char *))
{
	if(name && f)
		(*f)(name);
}	
