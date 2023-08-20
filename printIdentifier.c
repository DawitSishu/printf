#include "main.h"
/**
 * printc - prints identifier (%)
 * @args: va_list variable
 * 
 * Return: number of caracters printed (1)
 */
int printc(va_list args)
{
(void)args;
printer_fun('%');
return (1);
}
