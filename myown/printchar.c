#include "main.h"
/**
 * printchar - this function is aimed at printing a single character
 *
 * @achar: a character is printed with this parameter
 *
 * Return: suppose to return number of character so it will be
 * (1) since the function prints only one character
 */
int printchar(char achar)
{
	return (write(1, &achar, 1));
}
