/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:49:42 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/26 12:33:30 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "./libft/libft.h"

int		ft_printf(const char *format, ...);
int	    ft_printnbr(int n);
int	    ft_printstr(char *str);
int     ft_percent(void);
int		ft_printhex(unsigned int num, const char format);
int		ft_proofformat(va_list arguments, const char format);
int 	ft_printuint(unsigned int n);
int		ft_printpointer(unsigned long long ptr);

#endif