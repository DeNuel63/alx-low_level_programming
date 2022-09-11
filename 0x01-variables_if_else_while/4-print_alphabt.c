#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabt;

	alphabt = 'a';
	while (alphabt <= 'z')
	{
		if (alphabt == 'e')
		{
		}
		else
			if (alphabt == 'q')
			{
			}
			else
				putchar(alphabt);
		alphabt++;
	}
	putchar('\n');
	return (0);
}
