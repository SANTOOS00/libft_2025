/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:41:29 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/28 01:26:29 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	bi;
	size_t	lt;

	if (little[0] == '\0')
		return ((char *)big);
	if (!big && len == 0)
		return (0);
	bi = 0;
	while (big[bi])
	{
		lt = 0;
		if (big[bi] == little[lt])
		{
			while (big[bi + lt] == little[lt] && len > bi + lt && little[lt])
				lt++;
			if (!little[lt])
				return ((char *)&big[bi]);
		}
		bi++;
	}
	return (0);
}
