#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: name to be printed
 * @f: pointer to a function that takes a char * and returns void
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
    if (f)
        f(name);
}
