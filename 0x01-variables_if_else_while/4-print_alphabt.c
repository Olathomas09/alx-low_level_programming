#include <stdio.h>
/**
 * main - main block
 * Description: get a random number and check its
 * Return: Always 0.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'Z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');

	return (0);
}
