/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:43:38 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/25 00:17:00 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_contword(char const *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (word);
}

static char	*ft_mystrdup(char const *s, char c)
{
	char	*str;
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		return (NULL);
	}
	while (len > i)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	ft_freeloop(char **str, size_t i)
{
	size_t	len;

	len = 0;
	while (i > len)
	{
		free(str[i++]);
	}
	free(str);
}

static char	**ft_mystrncat(char **str, char const *s, char c, size_t word)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (word > i)
	{
		while (s[len] && s[len] == c)
		{
			len++;
		}
		if ((s[len] && s[len] != c))
		{
			str[i] = ft_mystrdup(&s[len], c);
			if (!str[i])
				return (ft_freeloop(str, i), NULL);
			i++;
			while ((s[len] && s[len] != c))
				len++;
		}
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	word;
	char	**str;

	if (!s)
	{
		return (NULL);
	}
	word = ft_contword(s, c);
	str = malloc(sizeof(char **) * (word + 1));
	if (!str)
		return (NULL);
	return (ft_mystrncat(str, s, c, word));
}
