#include "main.h"
/*
 * computes the abssolute value*/int _abs(int a)
{
	if (a < 0)
		return (-1 * a);
	else if (a == 0)
		return (0);
	else (a > 0)
		return (1 * a);
}
