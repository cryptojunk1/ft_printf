/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:30:11 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/20 17:26:17 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *search, size_t len)
{
	size_t	search_len;

	search_len = ft_strlen(search);
	if (search_len == 0)
		return ((char *)haystack);
	while (*haystack != '\0' && len >= search_len)
	{
		if (*haystack == *search)
		{
			if (ft_strncmp(haystack, search, search_len) == 0)
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}

/*
int main(void)
{
    char str[] = "alsdjHelaljHellonakncoa";
    char find[] = "scs";

    char *ptr = ft_strnstr(str, find, sizeof(str));

    if (ptr != NULL)
    {
        printf("Found: %s\n", ptr);
    }
    else
    {
        printf("Not found.\n");
    }

    return 0;
}
*/