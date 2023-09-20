/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:01:09 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/20 16:52:01 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "Libft/libft.h"

static int get_num_len(int n)
{
	int	len;
	
	len = 0;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	ft_is_negative(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}




int	ft_printnbr(int n)
{
	int     print;
    char    *num;

    print = 0;
    num = ft_itoa(n);
    print = ft_printstr(num);
    return (print);
}