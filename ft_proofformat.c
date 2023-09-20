/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proofformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:41:41 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/20 15:34:52 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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