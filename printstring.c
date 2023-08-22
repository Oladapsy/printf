#include "main.h"
/**
 * printstring - this function will be used to
 * print out a bunch of string until their null is reached
 *
 * @string: the string to be printed
 * Return: number of byte(string) printed
 */
int printstring(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		printchar(string[i]);
		i++;
	}
	return (i);
}
