#include "main.h"
/**
 * print_sign - function that checkds for alphabets
 *
 * @n: parameter to be checked
 *
 * Return: 1, 0 snd -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
