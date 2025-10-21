/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:37:48 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/19 23:17:12 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s22;
	size_t			len;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	len = 0;
	if (!s11 && !s22)
	{
		return (0);
	}
	while (n > len)
	{
		if (s11[len] != s22[len])
		{
			return (s11[len] - s22[len]);
		}
		len++;
	}
	return (0);
}
