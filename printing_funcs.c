#include "main.h"

/**
* print_string - prints a string to stdout
* @str: the string to be printed
*
* Return: printed chars
*/
int print_string(va_list str)
{
unsigned int i = 0;
char *final = va_arg(str, char *);
if (final == NULL)
{
return (0);
}
while (final[i] != '\0')
{
printer_fun(final[i]);
i++;
}
return (i);
}

/**
* print_character - prints a string to stdout
* @chr: the string to be printed
*
* Return: printed  1 (only one is printed)
*/
int print_character(va_list chr)
{
char final = va_arg(chr, int);
printer_fun(final);
return (1);
}

