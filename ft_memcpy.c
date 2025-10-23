/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:12:31 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/23 13:45:04 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	unsigned char	*src1;
	size_t		i;
	
	
	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}