#ifndef PRINTF
#define PRINTF
#include <stdarg.h>

int _printf(const char *format, ...);
void _porce_printf(int i, const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
void _puts(char *str);
void _switch(int *size, int *i, const char *format, va_list argument);

#endif


