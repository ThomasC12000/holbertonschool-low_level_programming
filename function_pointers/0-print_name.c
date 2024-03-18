#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Char value
 * @f: function pointer that takes a string argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
