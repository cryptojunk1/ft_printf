/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:01:09 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/26 16:26:24 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int     print;
    char    *num;

    print = 0;
    num = ft_itoa(n);
    print = ft_printstr(num);
    free(num);
    return (print);
}
