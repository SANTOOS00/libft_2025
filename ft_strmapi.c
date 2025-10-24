/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:46:47 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/19 18:40:22 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	lens;
	char			*str;

	if (!s || !f)
		return (NULL);
	lens = ft_strlen(s);
	str = malloc(sizeof(char) * (lens + 1));
	if (!str)
		return (NULL);
	lens = 0;
	while (s[lens])
	{
		str[lens] = f(lens, s[lens]);
		lens++;
	}
	str[lens] = '\0';
	return (str);
}
