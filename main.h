#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>


/**
 * struct characterIdentifier - represents caracter and its handler funcion
 * @character: the caracter to be identified
 * @f: the function associated with the character
 */
struct characterIdentifier
{
char character;
int (*f)(va_list);
};
typedef struct characterIdentifier identifier;
int printer_fun(const char c);
int print_string(va_list str);
int print_character(va_list chr);
int _printf(const char *format, ...);

#endif
