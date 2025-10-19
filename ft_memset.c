/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:36:30 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/14 19:36:32 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	if (!s)
	{
		return (NULL);
	}
	unsigned char *str = s;

	while (n--)
	{
		*str++ = (unsigned char)c;
	}

	return (s);
}