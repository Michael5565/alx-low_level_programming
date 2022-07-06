#include "main.h"

/*
 * function to find is_lower*/int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

