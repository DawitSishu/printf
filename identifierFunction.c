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
