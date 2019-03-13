#include "function_pointers.h"

/**
 * print_name - prints the name using function pointer.
 * @name: input from main.
 * @f: function pointers pointing to char pointer.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	*f = &name;

	f(name);
}
