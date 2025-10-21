/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:54:23 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/19 23:43:28 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			len;
	const unsigned char			*str;
	unsigned char	ch;

	str = (const unsigned char *)s;
	ch = (unsigned char)c;
	len = 0;
	while (n > len)
	{
		if (str[len] == ch)
		{
			return ((char *)&str[len]);
		}
		len++;
	}
	return (NULL);
}
