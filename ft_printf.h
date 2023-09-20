/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:29:20 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/20 15:36:16 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include "Libft/libft.h"

int ft_printf(const char *, ...);
int ft_percent(void);
int ft_putchar(char c);
int	ft_proofformat(va_list arguments, const char format);
int	ft_printstr(char *str);
int	ft_printnbr(int n);
