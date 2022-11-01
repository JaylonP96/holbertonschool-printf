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
	unsigned int bigI;

	if (i < 0)
	{
		o += printChar('-');
		bigI = -i;
	}
	else
	{
		bigI = i;
	}
	if (bigI < 10)
	{
		return (o + printChar('0' + bigI));
	}
	else
	{
		o += printInt(bigI / 10);
		return (o + printChar('0' + (bigI % 10)));
	}
}
