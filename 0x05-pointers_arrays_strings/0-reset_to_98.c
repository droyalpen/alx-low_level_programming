#include <stdio.h>
#include "main.h"
#include "main.c"

/**
 * write a function that takes int parameters to 98
 * and updates it point to 98
 * @n: input
 * Return: n
 */

void reset_to_98(int *n)
{
	*n = 98;
}
