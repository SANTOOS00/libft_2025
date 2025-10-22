/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:21:54 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/19 23:24:28 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	n;
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	n = 0;
	while (src[n] && n < size - 1)
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (len);
}