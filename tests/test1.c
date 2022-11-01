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
		if (i == 'n')
			i++;
		out[1] = i;
		printf("\n\n\t\t TEST CASE %c",i);
		if (i != 's')
		{
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

			printf("\nChar values\n");
			printf(out,'c');
			printf(out, CHAR_MAX);
			printf(out, SCHAR_MIN);
			printf(out, SCHAR_MAX);
			printf("\n");
			_printf(out,'c');
			_printf(out, CHAR_MAX);
			_printf(out, SCHAR_MIN);
			_printf(out, SCHAR_MAX);

		}
	        printf("\nString values\n");
		printf(out,"");
		printf(out,NULL);
		printf(out,"\t TAB");
		printf(out, "%% Precent");
		printf("\n");
		_printf(out,"");
		_printf(out,NULL);
		_printf(out,"\t TAB");
		_printf(out, "%% Precent");


	}

	return(0);
}
