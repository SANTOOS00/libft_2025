/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:17:27 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/24 19:29:49 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest,  const void *src, size_t n)
{
	unsigned char *dest1;
	unsigned char	*src1;
	size_t i;

	src1 = (unsigned char *)src;
	dest1 = dest;
	i= 0;
	if (!dest1 && !src1)
		return (dest);
	if (dest1 > src1)
	{
		while ((long)--n >= 0)
			dest1[n] = src1[n];
	}
	else
	{
		ft_memcpy(dest1, src1, n);
	}
	return (dest1);
}

