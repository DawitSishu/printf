#include "main.h"

/**
* printStrings - prints a string to stdout
* @args: va_list variable
*
* Return: number of characters printed
*/
int printStrings(va_list args)
{
char *str = va_arg(args, char *);
int item_count = 0, i;

if (str == NULL)
str = "(null)";

for (i = 0; str[i] != '\0'; i++)
{
printer_fun(str[i]);
item_count++;
}
return (item_count);
}
