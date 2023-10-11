#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - prints name
 *@name: name of a person
 *@f: function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
