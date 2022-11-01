#include "main.h"
#include <stdio.h>
#include <stddef.h>

int main(void)
{
	printf("(\"%%\")\n");
	printf("%");
	printf("\n");
	_printf("%");
	printf("\n END TEST\n");

	printf("(\"%%\",NULL)\n");
	printf("%",NULL);
	printf("\n");
	_printf("%",NULL);
	printf("\n END TEST\n");

	printf("(NULL,\"BOB\")\n");
	printf(NULL,"BOB");
	printf("\n");
	_printf(NULL, "BOB");
	printf("\n END TEST\n");

	return (0);
}
