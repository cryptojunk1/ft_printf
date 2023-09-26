/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:38:11 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/26 16:49:31 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

static int ft_lenptr(uintptr_t ptr)
{
    int i;

    i = 0;
    while (ptr != 0)
    {
        i++;
        ptr /= 16;
    }
    return (i);
}

static void ft_putptr(uintptr_t ptr)
{
    if (ptr >= 16)
    {
        ft_putptr(ptr / 16);
        ft_putptr(ptr % 16);
    }
    else
    {
        if (ptr <= 9)
            ft_putchar_fd((ptr +'0'), 1);
        else
            ft_putchar_fd((ptr -10 + 'a'), 1);
    }
}

int ft_printpointer(unsigned long long ptr)
{
    int print;

    print = 0;
    print = print + write(1, "0", 1);
    if (ptr == 0)
    {
        return (write(1, "0", 1));
    }
    else
    {
        ft_putptr(ptr);
        print = print + ft_lenptr(ptr);
    }
    return (print);
}