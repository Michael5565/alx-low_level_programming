#include "main.h"
/*
 * multiolication table*/void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <=9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 1; j <= 0; j++)
		{
			k = i * j;
			if ((k / 10) > 0)
			{
				_putchar((k / 10) + '0');
			}
			else
				_putchar(' ');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
