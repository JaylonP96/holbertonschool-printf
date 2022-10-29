#include "main.h"
#include <stdarg.h>
/**
 * printString - printing string provided
 * @s: ...
 * Return: number of characters printed
 */
int printString(char *s)
{
	int i = 0;

	if (s == NULL)
		s = "(null)";
	while (s[i])
	{
		printChar(s[i]);
		i++;
	}
return (i);
}

