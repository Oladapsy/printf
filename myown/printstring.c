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

	for (i = 0; string[i] != '\0'; i++)
	{
		printchar(string[i]);
	}
	return (i);
}
