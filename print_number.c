#include "main.h"

/**
 * print_number - prints an integer number using an array
 * @args: arguments
 *
 * Return: count
 */
int print_number(va_list args)
{
	int arr[100], i = 0, j, r, count = 0;
	int num;

	num = va_arg(args, int);

	if (num == 0 || !num)
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}

	while (num != 0)
	{
		r = num % 10;
		arr[i] = r;
		i++;

		num /= 10;
	}

	for (j = i - 1; j > -1; j--, count++)
		_putchar(arr[j] + '0');

	return (count);
}
