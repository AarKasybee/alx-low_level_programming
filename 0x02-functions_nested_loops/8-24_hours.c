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
		while (t < 60)
		{
			putchar(hours / 10 + '0');
			putchar(hours % 10 + '0');
			putchar(':');
			putchar(t / 10 + '0');
			putchar(t % 10 + '0');
			putchar('\n');
			t++;
		}
		t = 0;
		hours++;
	}
}
