#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: a const type of integer
 * @...: An unknown variable parameters to calculate
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum = 0;

	va_start(num, n);

	for (i = 0; i < n; i++)
		sum += va_arg(num, int);

	if (n == 0)
		return (0);
	va_end(num);

	return (sum);
}
