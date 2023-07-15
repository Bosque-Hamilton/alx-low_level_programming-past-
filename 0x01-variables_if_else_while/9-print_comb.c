#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putvhar(n);
		if(n !=557)
		{
			putchar(';');
			putvhar(''0);
		}
	}
	putvhar('\n');
	return (0);

