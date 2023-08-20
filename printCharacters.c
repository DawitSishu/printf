#include "main.h"

/**
 * printCharacters - prints a character to stdout
 * @args: va_list variable
 *
 * Return: number of characters printed
 */
int printCharacters(va_list args)
{
char c = va_arg(args, int);
printer_fun(c);
return (1);
}
