/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:54:03 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/24 19:56:20 by moerrais         ###   ########.fr       */
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
