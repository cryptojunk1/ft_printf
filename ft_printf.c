/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:25:33 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/20 16:29:49 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Program name libftprintf.a

Turn in files Makefile, (*.h, *//*.h, *.c, *//*.c)

Makefile NAME, all, clean, fclean, re

External functs. malloc, free, write,

va_start, va_arg, va_copy, va_end

Libft authorized Yes

Description 
Write a library that contains ft_printf(), a function that will mimic the original printf()
You have to recode the printf() function from libc.
The prototype of ft_printf() is:    int ft_printf(const char *, ...);

Here are the requirements:

		• Don’t implement the buffer management of the original printf().
		• Your function has to handle the following conversions: cspdiuxX%
		• Your function will be compared against the original printf().
		• You must use the command ar to create your library. Using the libtool command is forbidden.
		• Your libftprintf.a has to be created at the root of your repository

RETURN VALUE
       Upon  successful return, these functions return the number of characters printed (excluding the null byte used
       to end output to strings).

       If an output error is encountered, a negative value is returned.
*/

#include "ft_printf.h"
#include "Libft/libft.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_proofformat(va_list arguments, const char format)
{
	int	print;

	print = 0;
	if (format == 'c')/*Wenn einzelner Character*/
	{
		print = print + ft_putchar(va_arg(arguments, int));
	}
	else if (format == 's')/*Wenn string; putstring anwenden?*/
	{
		print = print + ft_printstr(va_arg(arguments, char *));
	}
	else if (format == 'p')/*Adresse von pointer; Hex; Base 16*/
	{
		
	}
	else if (format == 'd' || format == 'i')/*Wenn Dezimalnummer; Base 10 ; itoa, putnbr?*/
	{
		print = print + ft_printnbr(va_arg(arguments, int));
	}
	else if (format == 'u')/*für unsigned int, putnbr*/
	{
		
	}
	else if (format == 'x' || format == 'X')/*Hexadezimal; Base 16, Groß und Klein*/
	{
		
	}
	else if (format == '%')/*%-Zeichen ausgeben*/
	{
		print = print + ft_percent();
	}
	return (print);
}

int ft_printf(const char *str, ...)
{
	va_list	arguments;
	int		i;
	int		print;

	i = 0;
	va_start (arguments, str); /* Start Argument-liste */
	while (str[i])
	{
		if (str[i] == '%')/*wenn %, dann prüfe das Format*/
		{
			print = print + ft_proofformat(arguments, str[i + 1]);
			i++;
		}
		else
			print = print + ft_putchar(str[i]);/*Rest ausgeben also alles vor und nach %*/
		i++;
	}
	va_end (arguments); /*Ende Argument-Liste*/
	return (print); /*Länge zu printen ohne '\0' */
}



int	main()
{
	char	*test = {"Hallo Welt"};
	char	chartest = 'A';
	char	chartest2 = 'B';
	int		numtest = 123456;
	int		numtest2 = -123456;

	printf("Test Orginal: %c %c\n", chartest, chartest2);
	ft_printf("Test Eigen: %c %c", chartest, chartest2);
	printf("\nTest String: %s\n", test);
	ft_printf("Test Eigen: %s", test);
	printf("\nTest Orginal: %d %i\n", numtest, numtest2);
	ft_printf("Test Eigen: %d %i", numtest, numtest2);
	printf("\n");
}
