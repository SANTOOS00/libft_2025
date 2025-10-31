/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:41:22 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/24 23:41:24 by moerrais         ###   ########.fr       */
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
