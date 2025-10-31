/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:41:12 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/28 01:07:35 by moerrais         ###   ########.fr       */
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
