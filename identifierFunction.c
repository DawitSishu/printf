#include "main.h"

/**
 * identifierFunc - identifies function depending on string representation
 * @format: the string format to be used
 *
 * Return: a pointer to a printer function
 */
int (*identifierFunc(char *format))(va_list args)
{
characterIdentifier identifiers[] = {
{"%c", printCharacters},
{"%s", printStrings},
{"%%", printIdentifier},
{"%d", printIntigers},
{"%i", printIntigers},
{NULL, NULL}
};
int i;
if (format[1] == ' ' || format[1] == '\0')
{
return (NULL);
}
for (i = 0; identifiers[i].character; i++)
{
if (format[1] == identifiers[i].character[1])
return (identifiers[i].f);
}
return (NULL);
}

/**
* printIntigers - prints an intiger to sdout
* @args: va_list va_list variable
*
* Return: number of characters printed
*/
int printIntigers(va_list args)
{
int num = va_arg(args, int);
int digits;

digits = print_digits(num);

return (digits);
}

/**
* count_digits - counts the number of digits
* @num: given number
*
* Return: number of digits
*/
int count_digits(int num)
{
int digits = 0;
int positive_num = num > 0 ? num : -1 * num;

if (num <= 0)
digits += 1;

while (positive_num != 0)
{
positive_num = positive_num / 10;
digits++;
}
return (digits);
}

/**
* print_digits - prints digits of a given number
* @num: given number
*
* Return: number of digits
*/
int print_digits(int num)
{
int digits = count_digits(num);
unsigned int base_int = (num < 0) ? -num : num;;

if (num < 0)
{
printer_fun('-');
}


if (base_int >= 10)
{
print_digits(base_int / 10);
}
printer_fun(base_int % 10 + '0');

return (digits);
}
