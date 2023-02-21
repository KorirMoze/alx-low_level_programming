
#include "main.h"

/**
*always-check the code
*Return aways(0)
*/
void print_alphabet_x10(void)
{
	alpha_count = 0;
	while (alpha_count <10;)
	{
		char al = 'a';
		while(al <='z')
		{
			_putchar(al);
			al++;
		}
		alpha_count++;
		_putchar('\n')
	}
}
