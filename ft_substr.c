/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:41:46 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/30 09:46:39 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strmalloc(const char *s, unsigned int st, size_t len, size_t ln)
{
	char	*str;
	size_t	i;

	i = 0;
	if (len > ln - st)
	{
		len = ln - st;
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
	return (ft_strmalloc(s, start, len, lens));
}
