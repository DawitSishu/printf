#include "main.h"
/**
* _abs - calculates the absolute value.
* @number: input.
* Return: value.
*/
int _abs(int number)
{
if (number < 0)
return (-1 * number);
else
return (number);
}

/**
* contadordigit - counts the digits.
* @number: input integer
* Return: digit count
*/
int contadordigit(int number)
{
int count = 0;
int number2 = number;

if (number <= 0)
count += 1;

while (_abs(number2) != 0)
{
number2 = number2 / 10;
count++;
}
return (count);
}
/**
* integer - a function that prints an integer.
* @number: input integer
* Return: digit count
*/
int integer(int number)
{
unsigned int unint;
int count;

count = contadordigit(number);
if (number < 0)
{
printer_fun('-');
unint = -number;
}
else
unint = number;

if (unint >= 10)
integer(unint / 10);
printer_fun(unint % 10 + '0');

return (count);
}

/**
* printint - prints a number
* @pa: va_list with number to print
* Return: number of characters printed
*/
int printint(va_list args)
{
int number = va_arg(args, int);
int numero;

numero = integer(number);

return (numero);
}
