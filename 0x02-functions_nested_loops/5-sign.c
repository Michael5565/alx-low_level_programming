#include "main.h"
/*
 * finding signs of number*/int print_sign(int n)
{
	int n;
	if (n > 0)
	{
		_putch('+');
		return (1);
	}
	else if (n == 0)
	{
		_putch('0');
		return (0);
	}
	else
	{
		_putch('-');
		return (-1);
	}
}
