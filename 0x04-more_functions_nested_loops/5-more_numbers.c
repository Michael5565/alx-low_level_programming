#include"main.h"
/*
 * main*/void more_numbers(void)
{
	int n;
	int a;

	for (n = 0; n <= 9; n++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
	_putchar('\n');
	}

}
