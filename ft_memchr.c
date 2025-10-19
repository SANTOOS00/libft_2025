/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:54:23 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/16 15:54:24 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t len;
	char *str;
	unsigned char ch;

	str = (char *)s;
	ch = c;
	len = 0;
	if (!str)
	{
		return (0);
	}
	while (str[len] != '\0' && n > len)
	{
		if (str[len] == ch)
		{
			return (&str[len]);
		}
		len++;
	}
	return (NULL);
}