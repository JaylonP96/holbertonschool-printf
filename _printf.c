#include main.h

/**
 *_printf - clone of printf
 *@format:Input string with format char
 *
 * Return: Count of Characters printed
 */
int _printf( char *format, ...)
{
	va_list args;
	unsigned int charSum = 0, index = 0;

	while (format[index] != '\0')
	{
		while (format[index] != '%')
		{
			sum += printChar(format[index]);
			index++;
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
		case 'i':
			charSum += printInt(va_arg(args, int));
			break;
		case 'd':
			charSum += printDouble(va_arg(args, int));
			break;

		}
		/* Increment index past the format char */
		index +=2;
	}

	/*NOT IMPLEMENTED*/
	return ((int)charSum);
}
