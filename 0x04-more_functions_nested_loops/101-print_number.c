#include "main.h"
#include<stdio.h>

/**
 * print_integer - Entry point
 * print_integer: Function to print integer
 * @num: input number
 * Return: Always 0 (success)
 */

void print_integer(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10 != 0)
	{
		print_integer(num / 10);
	}
	_putchar(num % 10 + '0');
}

