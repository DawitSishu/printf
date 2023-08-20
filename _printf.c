#include "main.h"

/**
* _printf - a custom functioon that acts like prinf
* @format: the string format that is used  for printing
*
* Return: The number of characters printed
*/
int _printf(const char *format, ...)
{
int printed_chars = 0, i, (*identifier)(va_list);
char identifiers[3];
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
identifiers[0] = '%';
identifiers[1] = format[i + 1];
identifiers[2] = '\0';
identifier = identifierFunc(identifiers);
if (identifier)
{
printed_chars += identifier(args);
i++;
}
else if (format[i + 1] != '\0')
{
printed_chars += printer_fun('%');
printed_chars += printer_fun(format[i + 1]);
i++;
}
else
{
printed_chars += printer_fun('%');
break;
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
