#include "main.h"
#include <stdarg.h>

/**
 *_printf - clone of printf
 *@format:Input string with format char
 *
 * Return: Count of Characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int charSum = 0, index = 0, flagIndex;
	char flag[] = { '#', '1', '2', '3', '4',
			'5', '6', '7', '8', '9', '.',
			'0', '-', ' ', '+', '\0',
			'h', 'l', 'L', 'j', 'z', 't'};

	if (format == NULL)
		return (0);

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
		index++;
		flagIndex = 0;
		while (flag[flagIndex])
		{
			if (flag[flagIndex] == format[index])
			{
				index++;
				flagIndex = 0;
				continue;
			}
			flagIndex++;
		}

		switch (format[index])
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
		default:
			charSum += printChar('%');
			charSum += printChar(format[index]);
			break;
		}
		/* Increment index past the format char */
		index++;
	}
	va_end(args);
	/*NOT IMPLEMENTED*/
	return ((int)charSum);
}
