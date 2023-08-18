#include "main.h"

/**
* print_char - prints a character to stdout
* @c: the character to be printed
*
* Return: 0 on success and -1 on failure
*/

int print_char(char c)
{
return (write(1, &c, 1));
}
