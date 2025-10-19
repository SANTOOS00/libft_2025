/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:53:00 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/15 15:53:02 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *dest1 = dest;
	const char *src1 = src;

	if (!dest1 || !src1)
	{
		return (dest);
	}
	if (dest1 > src1)
	{
		while (n > 0)
		{
			dest1[n - 1] = src1[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy(dest1, src1, n);
	}
	return (dest);
}
char to_uppercase(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return c;
}
