/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:27:48 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/25 12:41:52 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == (char)c)
		return ((char *)(s));
	return (NULL);
}
/*
int	main()
{
	char	s1[] = "Hellko";
	int	needle = 'z';
	char *x = ft_strchr(s1, needle);	
	if (x == NULL)
	{
		printf("%c is not here! Come back again tommorow!\n", needle);
	}
	else
		printf("%c is here. Yieppii!\n" , needle);		
}
*/