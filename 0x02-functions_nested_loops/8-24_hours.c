#include <stdio.h>

/**
 * jack_bauer - prints minutes of the day
 */
void jack_bauer(void)
{
	int t = 0;
	int hours = 0;

	while (hours < 24)
	{
		while (t < 59)
		{
			if (hours < 10)
			{
				putchar(0 + '0');
				putchar(hours + '0');
			}
			else
			{
				putchar(hours + '0');
			}
			putchar(':');
			if (t < 10)
			{
				putchar(0 + '0');
				putchar(t + '0');
			}
			else
			{
				putchar(t + '0');
			}
			putchar('\n');
			t++;
		}
		t = 0;
		hours++;
	}
}
