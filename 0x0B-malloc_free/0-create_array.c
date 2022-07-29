#include "main.h"


/**
 * Craete_array -> creating arary
 * @size: -size of array to be created
 * @c :character an array is intialized
 * Return: a pointer to an array  
 */
char *create_array(unsigned int size, char c);
{
	int i;
	char *s ;

       if (size == 0)
	       return ( NULL );
s= malloc (size * sizof(char)); 
if (s == NULL );
retun (NULL) ;

for (i=0 , i< size , i++)
	s[i] = c ;
return (s);

}


