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
char *character;
int (*f)(va_list);
};
typedef struct characterIdentifier characterIdentifier;
int (*identifierFunc(char *format))(va_list args);
int printCharacters(va_list args);
int printStrings(va_list args);
int printIdentifier(va_list args);
int printIntigers(va_list args);
int count_digits(int num);
int print_digits(int num);
int printer_fun(const char c);
int _printf(const char *format, ...);

#endif
