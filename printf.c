#include "main.h"
/**
 * _printf - This function p[erforms the function of printf which
 * is to print formatted output and variadic function does the job for us
 *
 *
 * @format: the formated string is accepted
 * Return: the no of bytes or number of character printed
 */
int _printf(const char *format, ...)
{
	unsigned int pfret = 0, i;
	unsigned int count, id_count = 0;

	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			printchar(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			printchar(va_arg(args, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
		count = printstring(va_arg(args, char *));
		pfret += (count - 1);
		i++;
		}
		else if (format[i] == '%' && (format[i + 1] == '%'))
		{
			printchar('%');
			i++;
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			id_count += printint(va_arg(args, int));
			i++;
			pfret += (id_count - 1);
		}
		else
		{
			printchar('%');
		}
		pfret += 1;
	}
	va_end(args);
	return (pfret);
}
