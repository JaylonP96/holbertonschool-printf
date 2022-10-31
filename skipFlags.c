#include "main.h"

/**
 * skipFlags - skipping the flags
 * @index: ...
 * @format: ...
 * Return: (0)
 */

int skipFlags(int *index, const char *format)
{
	int flagIndex = 0;
	char flags[] = {'#', '1', '2', '3', '4', '5', '6', '7', '8', '9',
			'-', '+', ' ', 'h', 'l', 'L', 'j', 'z', 't', '\0'};

	for (flagIndex = 0; flags[flagIndex]; flagIndex++)
	{
		if (flags[flagIndex] == format[*index])
		{
			(*index)++;
			flagIndex = 0;
		}
	}
	return (0);
}
