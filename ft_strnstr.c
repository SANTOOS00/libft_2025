/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 23:19:05 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/19 23:22:04 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	bi;
	size_t	lt;

	if (!big && len == 0)
		return (0);
	if (little[0] == '\0')
		return ((char *)big);
	bi = 0;
	while (big[bi])
	{
		lt = 0;
		if (big[bi] == little[lt])
		{
			while (big[bi + lt] == little[lt] && len > bi + lt)
				lt++;
			if (!little[lt])
				return ((char *)&big[bi]);
		}
		bi++;
	}
	return (0);
}
