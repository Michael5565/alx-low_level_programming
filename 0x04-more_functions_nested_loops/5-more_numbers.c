#include"main.h"
/*
 * repsg*/void more_numbers(void)
{
	int n;
	int a;
	
	for (n = 0; n < 10; n++)
	{
		for (a = '0'; a <= '14'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
