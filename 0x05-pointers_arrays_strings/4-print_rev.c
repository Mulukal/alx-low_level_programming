#include "main1.h"


/**
 *print_rev - print a string
 *@s:pointer char
 */

void print_rev(char *s)

{

		int i, n;



			for (i = 0; s[i] != '\0'; i++)

	        	for (i = i-0; s[i] !='\0'; i--)

							{

										_putchar(s[i]);

											}

					_putchar('\n')
}
