#include "main.h"
/**
 * printstring - This is a function that prints strings
 * @string: the string to be printed is collected by this
 *
 * Return: no of byte of string printed
 */
int printstring(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		printchar(string[i]);
	}
	return (i);
}

/**
 * printint - print integer
 *
 * @aint: The integer to be printed
 * Return: int
 */
int printint(int aint)
{
	int i = 0;

	if (aint < 0)
	{
	i += printchar('-');
	aint = -aint;
	}

	if (aint / 10 != 0)
	{
		i += printint(aint / 10);
	}
	i += printchar('0' + (aint % 10));
	return (i);
}

/**
 * printchar - prints a character to the standard output
 *	using system call unistd
 *
 * @alphabet: character input to be outputed
 * Return: 1
 */
int printchar(char alphabet)
{
	return (write(1, &alphabet, 1));
}
