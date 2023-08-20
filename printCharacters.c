#include "main.h"
/**
 * printCharacters - prints a character to stdout
 * @args: va_list variable
 *
 * Return: number of caracters printed (1)
 */
int printCharacters(va_list args)
{
printer_fun(va_arg(args, int));
return (1);
}
