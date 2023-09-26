/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:49:42 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/26 16:48:35 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>

int		ft_printf(const char *format, ...);
int	    ft_printnbr(int n);
int	    ft_printstr(char *str);
int     ft_percent(void);
int		ft_printhex(unsigned int num, const char format);
int		ft_proofformat(va_list arguments, const char format);
int 	ft_printuint(unsigned int n);
int		ft_printpointer(unsigned long long ptr);

char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
char	*ft_strdup(const char *s);
int		ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);


#endif