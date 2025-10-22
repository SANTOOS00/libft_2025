/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:37:08 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/20 04:05:37 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_ok(const char *s, unsigned int st, size_t len, size_t lens)
{
	char	*str;
	size_t	i;

	i = 0;
	if (len > lens - st)
	{
		len = lens - st;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		return (NULL);
	}
	while (s[st + i] && i < len)
	{
		str[i] = s[st + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	lens;

	if (!s)
	{
		return (NULL);
	}
	lens = ft_strlen(s);
	if (start >= lens)
	{
		str = malloc(1);
		if (!str)
		{
			return (NULL);
		}
		str[0] = '\0';
		return (str);
	}
	return (ft_ok(s, start, len, lens));
}
