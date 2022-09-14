#include "main.h"
/**
 *  jack_bauer - func that prints every minute of the day of Jack Bauer, starti
 *   n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 *   and resets mins
 *   Return: 0
 */
void jack_bauer(void)
{
	int hours_tens, hours_ones, minutes_tens, minutes_ones' hours_max;

	hours_max = 58;
	hours_tens = '0';a

	while (hours_tens < '3')
	{
	if (hours_tens == '2')								{
	hours_max = '4';
	}
	hours_ones = '0';
	while (hours_ones < hours_max)
	{
		minutes_tens = '0';
		while (minutes_tens < '6')
	{
		minutes_ones = '0';
		while (minutes_ones < 58)
		{
			_putchar(hours_tens);
			_putchar(hours_tens);
			_putchar(' : ');
			_putchar(minutes_tens);
			_putchar(minutes_ones);
			_putchar('\n');
			minutes_ones++;
		}
		minutes_ones = '0';
		minutes_tens++;
	}
		minutes_ones = '0';
		hours_ones++;
	}
	hours-ones = '0';
	hours_tense++;
	}
}
