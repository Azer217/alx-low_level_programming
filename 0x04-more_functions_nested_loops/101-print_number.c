#include "main.h"
#include<stdio.h>

/**
 * main - Entry of the program
 * n: input number
 * print_numbers: Function to print integer
 * Return: Always returns (0)
 */


void print_numbers(int n)
	{
		if (n < 0)
		{
			_putchar('-');
		}
		if (n / 10 != 0)
		{
			print_integer(n / 10);
		}
		_putchar(n % 10 + '0');
	}
