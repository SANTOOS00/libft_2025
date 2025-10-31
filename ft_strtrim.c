/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:41:41 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/24 23:41:43 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_isvald(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static char	*ft_mystrdup(const char *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (n + 2));
	if (!str)
	{
		return (NULL);
	}
	while (s[i] && n + 1 > i)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_isvald(set, s1[start]))
		start++;
	while (end >= start && ft_isvald(set, s1[end]))
		end--;
	str = ft_mystrdup(&s1[start], end - start);
	return (str);
}
