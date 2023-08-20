#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
* struct characterIdentifier - represents character and its handler function
* @character: the character to be identified
* @f: the function associated with the character
*/
typedef struct characterIdentifier
{
char *character;
int (*f)(va_list args);
} characterIdentifier;

int (*identifierFunc(const char *format))(va_list args);
int printCharacters(va_list args);
int printStrings(va_list args);
int printIdentifier(va_list args);
int printer_fun(const char c);
int _printf(const char *format, ...);

#endif
