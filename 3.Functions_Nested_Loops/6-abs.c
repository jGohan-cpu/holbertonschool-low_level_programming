#include "main.h"

/**
* _abs - Computes the absolute value of an integer.
* @c: The number that will be computed.
*
*Return: Absolute value of number 
*/
int _abs(int c)
{
	int abs_val;
	if (c < 0)
	{

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
