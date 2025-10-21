/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:34:52 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/17 22:32:45 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_ok(char *str, char const *s1, char const *s2)
{
	size_t	i1;
	size_t	i2;
	size_t	i;

	i1 = 0;
	i2 = 0;
	i = 0;
	while (s1[i1] || s2[i2])
	{
		if (s1[i1])
		{
			str[i++] = s1[i1++];
		}
		else
			str[i++] = s2[i2++];
	}
	str[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
	{
		return (NULL);
	}
	ft_ok(str, s1, s2);
	return (str);
}
