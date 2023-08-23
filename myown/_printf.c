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
	int printfret = 0, i, printstringret;
	int di_ret = 0;

	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			printchar(format[i]);
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			printchar(va_arg(args, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			printstringret = printstring(va_arg(args, char *));
			printfret = (printstringret - 1);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			printchar('%');
			i++;
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			di_ret = printint(va_arg(args, int));
			i++;
			printfret += (di_ret - 1);
		}
		else
		{
			printchar('%');
		}
		printfret += 1;
	}
	va_end(args);
	return (printfret);
}
