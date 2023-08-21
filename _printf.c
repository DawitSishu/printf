#include "main.h"

/**
* _printf - a custom function that acts like printf
* @format: the string format that is used for printing
*
* Return: The number of characters printed
*/
int _printf(const char *format, ...)
{
int printed_chars = 0, i, (*identifier)(va_list);
va_list args;

if (format == NULL)
{
return (-1);
}

va_start(args, format);

for (i = 0; format[i]; i++)
{
if (format[i] == '%')
{
identifier = identifierFunc(&format[i]);
if (identifier)
{
printed_chars += identifier(args);
i++;
}
else
{
printed_chars += printer_fun('%');
}
}
else
{
printed_chars += printer_fun(format[i]);
}
}

va_end(args);
return (printed_chars);
}
