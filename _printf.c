#include "main.h"
#include <stdarg.h>

/**
 *_printf - clone of printf
 *@format:Input string with format char
 *
 * Return: Count of Characters printed
 */
int _printf( const char *format, ...)
{
	va_list args;
	unsigned int charSum = 0, index = 0;

	va_start(args, format);
	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
			charSum += printChar(format[index]);
			index++;
			continue;
		}
		/*
		 * Getting this far ensures the current char is %
		 * Next is decieding what we should be doing
		 */
		switch (format[index + 1])
		{
		case 'c':
			charSum += printChar(va_arg(args, int));
			break;
		case 's':
			charSum += printString(va_arg(args, char *));
			break;
		case '%':
			charSum += printChar('%');
			break;
		case 'd':
		case 'i':
			charSum += printInt(va_arg(args, int));
			break;
		case '\0':
			index--;
			break;
		}
		/* Increment index past the format char */
		index +=2;
	}
	va_end(args);
	/*NOT IMPLEMENTED*/
	return ((int)charSum);
}
