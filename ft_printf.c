/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:25:33 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/26 17:00:28 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
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
	printf("\nTest Orginal: %x %X\n", numtest, numtest2);
	ft_printf("Test Eigen: %x %X", numtest, numtest2);
	printf("\n");

}
