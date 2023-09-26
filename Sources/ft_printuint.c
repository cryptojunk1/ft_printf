/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:40:03 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/26 12:13:20 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_numlen(unsigned int num)
{
    int i;

    i = 0;
    while (num != '\0')
    {
        i++;
        num = num / 10;
    }
    return (i);
}

char	*ft_uitoa(unsigned int n)
{
	int		num_len;
	char	*res;

	num_len = ft_numlen(n);
	res = (char *)malloc((num_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[num_len] = '\0';
	while (num_len > 0)
	{
		res[num_len - 1] = (n % 10) + '0';
		n /= 10;
		num_len--;
	}
	return (res);
}

int ft_printuint(unsigned int n)
{
	int     print;
    char    *num;

    print = 0;
    if (n == 0)
        print = print + write(1, "0", 1);
    else
    {
        print = 0;
        num = ft_uitoa(n);
        print += ft_printstr(num);
        free(num);
    }
    return (print);
}