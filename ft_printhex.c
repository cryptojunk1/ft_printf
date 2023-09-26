/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:07:31 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/26 16:49:19 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_lenhex(unsigned int num)
{
    int i;

    i = 0;
    while (num != 0)
    {
        i++;
        num /= 16;
    }
    return (i);
}

static void ft_puthex(unsigned int num, const char format)
{
    if (num >= 16)
    {
        ft_puthex(num / 16, format);
        ft_puthex(num % 16, format);
    }
    else
    {
        if (num <= 9)
            ft_putchar_fd((num +'0'), 1);
        else
        {
            if (format == 'x')
                ft_putchar_fd((num -10 + 'a'), 1);
            if (format == 'X')
                ft_putchar_fd((num -10 + 'A'), 1);
        }
    }
}

int ft_printhex(unsigned int num, const char format)
{
    int print;

    print = 0;
    if (num == 0)
    {
        return (write(1, "0", 1));
    }
    else
        ft_puthex(num, format);
    
    print = ft_lenhex(num);

    return (print);
}