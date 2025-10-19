/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:34:34 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/16 13:34:38 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;
	unsigned char ch;
	int i;

	i = 0;
	ch = c;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
		{
			return (&str[i]);
		}
		i++;
	}
	if (str[i] == c)
	{
		return (&str[i]);
	}
	return (NULL);
}