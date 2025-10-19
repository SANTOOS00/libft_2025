/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:23:33 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/15 17:23:34 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstlen;
	size_t srclen;
	size_t i;
	size_t y;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (!size)
	{
		return (srclen);
	}
	i = dstlen;
	y = 0;
	if (size <= dstlen)
	{
		return (srclen + size);
	}
	while (src[y] != '\0' && size > i + 1)
		dst[i++] = src[y++];
	dst[i] = '\0';
	return (dstlen + srclen);
}