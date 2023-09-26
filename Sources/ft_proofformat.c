/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proofformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:25:34 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/26 12:35:18 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

static int	ft_putchar(char c)
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
		print = print + ft_printpointer(va_arg(arguments, unsigned long long));
	}
	else if (format == 'd' || format == 'i')/*Wenn Dezimalnummer; Base 10 ; itoa, putnbr?*/
	{
		print = print + ft_printnbr(va_arg(arguments, int));
	}
	else if (format == 'u')/*für unsigned int, putnbr*/
	{
		print = print + ft_printuint(va_arg(arguments, unsigned int));
	}
	else if (format == 'x' || format == 'X')/*Hexadezimal; Base 16, Groß und Klein*/
	{
		print = print + ft_printhex(va_arg(arguments, unsigned int), format);
	}
	else if (format == '%')/*%-Zeichen ausgeben*/
	{
		print = print + ft_percent();
	}
	return (print);
}