#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
{

	if (x % 2 == 0 )

	printf("%c",str[x]);
}	
printf("\n");
}
