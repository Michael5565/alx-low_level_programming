#include "main.h"
/*
 * computes the abssolute value*/int _abs(int a)
{
	if (a < 0)
		return (-1 * a);
	if (a == 0)
		return (0);
	if (a > 0)
		return (a);
}
