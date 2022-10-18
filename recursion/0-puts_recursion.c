#include "main.h"

/**
 *
 */

void _puts_recursion(char *s)
{

int lenght = strlen(string);
int middle = lenght / 2;
char temp;


for(i=0; i < middle; i++)
     {
      
      temp=string[i];
      string[i] = string[length - i - 1];
      string[lenght - i - 1] = temp; 	      	      

     } 



}
