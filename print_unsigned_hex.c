
#include "main.h"

/**
 * print_unsigned_hex - prints an unsigned hex
 * @args: arguments
 *
 * prints an hexadecimal number from an int by continously dividing it by 16
 * then storing it in an array, and putting the remainder as 0-9 or a-f
 *
 * Return: count of numbers printed
 */
int print_unsigned_hex(va_list args)
{
	unsigned int p, num, hex[100];
	int r;

	/* va_arg calls the argument provided and passes it as unsigned int */
	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (p = 0; num != 0; p++)
	{
		hex[p] = num % 16;
		num /= 16;
	}

	/* prints the hex array */
	for (r = p - 1; r >= 0; r--)
	{
		if (hex[r] < 10)
		{
			_putchar(hex[r] + '0');
		}
		else
		{
			_putchar((hex[r] % 10) + 'a');
		}
	}

	return (p);
}
