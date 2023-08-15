#include "main.h"

/**
 * jack_bauer - prints every minute of the day  00:00 to 23:59.
 *
 *
 * Return: On success 1.
 */

void jack_bauer(void)
{
	int Minutes, Seconds;

	for (Minutes = 0; Minutes <= 23; Minutes++)
	{
		for (Seconds = 0; Seconds <= 59; Seconds++)
		{
			_putchar(Minutes / 10 + 48);
			_putchar(Minutes % 10 + 48);
			_putchar(':');
			_putchar(Seconds / 10 + 48);
			_putchar(Seconds % 10 + 48);
			_putchar('\n');

		}
	}
}
