#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <limits.h>
int main(void)
{
	int i = 'a';
	char out[] = "%_\t";

	for (i = 'a'; i <= 'z'; i++)
	{
		out[1] = i;
		printf("\nInt values\n");
		printf(out,0);
		printf(out,-5);
		printf(out,INT_MIN);
		printf(out, INT_MAX);
		printf("\n");
		_printf(out,0);
		_printf(out,-5);
		_printf(out,INT_MIN);
		_printf(out, INT_MAX);


	}

	return(0);
}
