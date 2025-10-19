/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:21:54 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/15 17:21:56 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	len;

	n = 0;
	if (!src)
	{
		return (0);
	}
	len = ft_strlen(src);
	if (!dst)
	{
		return (len);
	}
	while (src[n] && n < size)
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = '\0';
	return (0);
}
