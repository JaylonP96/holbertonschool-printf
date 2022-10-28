#include "main.h"

/**
 * printInt - Print Int Value
 *@i: Int Value to print
 *
 * Return: count of bytes wrote
 */
int printInt(int i)
{
	int o = 0;

	if ( i < 0)
	{
		o += printChar('-');
		i *= -1;
	}
	if (i < 10)
	{
		return o + printChar('0' +i);
	}
	else
	{
		o += printInt(i / 10);
		return o + printChar('0' + (i % 10));
	}
}
