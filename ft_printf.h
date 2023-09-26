/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:49:42 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/26 06:49:13 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "libft.h"

int		ft_printf(const char *format, ...);
int	    ft_printnbr(int n);
int	    ft_printstr(char *str);
int     ft_percent(void);
int		ft_printhex(unsigned int num, const char format);


#endif