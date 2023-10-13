#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - prints a character
 *@args: va_list argument
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 *@args: va_list argument
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 *@args: va_list argument
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 *@args: va_list argument
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char*);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 *@format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *separator = "";
	printer_t printers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (printers[j].type != '\0')
		{
			if (format[i] == printers[j].type)
			{
				printf("%s", separator);
				printers[j].func(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
