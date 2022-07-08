#include"main.h"
/*
 * diagonal*/void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
			for (i = 2; i < n; i++)
			{
				_putchar('\n');
				_putchar(' ');
			}
	}
}
