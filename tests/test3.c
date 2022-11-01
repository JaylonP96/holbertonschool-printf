#include "main.h"
#include <stdio.h>

int main(void)
{
	int retVal = 0;
	int retVal2 = 0;
	printf("Just %%");
	retVal = _printf("%", "test");
	retVal2 = printf("%", "test");
	printf("\n%d%d\n", retVal, retVal2);
	printf("Null String");
	retVal = _printf("%s", NULL);
	retVal2 = printf("%s", NULL);
	printf("\n%d%d\n", retVal, retVal2);
	printf("NULL Format");
	retVal = _printf(NULL, "test");
	retVal2 = printf(NULL, "test");
	printf("\n%d%d\n", retVal, retVal2);
	return (0);
}
