#include "main.h"
/**
 * _printf - A function that emulates what the printf can do
 *
 * @format: since printf main function is formatting output,
 * this will serve as the formatted symbol
 *
 * Return: the no of byte returned
 *
 */
int _printf(const char *format, ...)
{
	size_t printfret = 0, i, count;
	size_t di_count = 0;

	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format)
	}
}
