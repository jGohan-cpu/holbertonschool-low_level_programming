#include "main.h"
#include <stdio.h>


/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */
void puts_half(char *str)
{
	int c;
		for(c=0; str[c]!='\n'; c++)
		{
			if (c % 2 == 1)
			{
				printf("%d",str[c]);
			}
			printf("\n");
		}
}
