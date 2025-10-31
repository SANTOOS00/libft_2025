/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:41:35 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/24 23:41:37 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	int				lenstr;

	ch = c;
	lenstr = ft_strlen(s);
	if (s[lenstr] == ch)
	{
		return ((char *)&s[lenstr]);
	}
	while (lenstr >= 0)
	{
		if (s[lenstr] == ch)
		{
			return ((char *)&s[lenstr]);
		}
		lenstr--;
	}
	return (NULL);
}
