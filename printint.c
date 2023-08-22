#include "main.h"
/**
 * printint - this function is written to print positive
 * and negative integers using recurssion
 *
 * @num: the number to be printed -ve or +ve
 *
 * Return: number
 */
int printint(int num)
{
	int i = 0;

	if (num < 0)
	{
	i += printchar('-');
	num = -num;
	}
	if (num / 10 != 0)
	{
		i += printchar(num / 10);
	}
	i += printchar('0' + (num % 10));
	return (i);
}
