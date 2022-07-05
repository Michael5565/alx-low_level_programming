#include "main.h"
/*
 * nested loop*/void print_alphabet_x10(void)
{
	int i = 10;

	for (i = 0; i < 10; i++)
	{
		int n;

		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}	
