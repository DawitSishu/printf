#include "main.h"

/**
* identifierFunc - identifies function depending on string representation
* @format: the string format to be used
*
* Return: a pointer to a printer function
*/
int (*identifierFunc(const char *format))(va_list args)
{
characterIdentifier selectors[] = {
{"%c", printCharacters},
{"%s", printStrings},
{"%%", printIdentifier},
{NULL, NULL}
};
int i;
if (format == NULL || format[0] != '%')
return (NULL);

for (i = 0; selectors[i].character; i++)
{
if (format[1] == selectors[i].character[1])
return (selectors[i].f);
}

return (NULL);
}
