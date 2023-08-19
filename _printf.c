#include "main.h"

/**
* _printf - a custom functioon that acts like prinf
* @format: the string format that is used  for printing
*
* Return: The number of characters printed
*/
int _printf(const char *format, ...)
{
unsigned int printed_chars = 0, i, j;
identifier choices[] = {
{'s', print_string},
{'c', print_character},
};
va_list args;
va_start(args, format);
if (format == NULL)
{
return (0);
}

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == '%')
{
printer_fun('%');
i++;
continue;
}
for (j = 0; j < sizeof(choices) / sizeof(choices[0]); j++)
{
if (choices[j].character == format[i + 1])
{
printed_chars += choices[j].f(args);
i++;
break;
}
}
}
else
{
printer_fun(format[i]);
}
}
va_end(args);
return (printed_chars);
}
