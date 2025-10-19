/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:27:35 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/16 14:27:37 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char ch;
	int lenstr;

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

int main()
{
	char str[] = "simziin izwniijo zdiwen[f owzef]";
	int c = 122;
	char *res = ft_strrchr(str,c);
	printf("%s",res);
	return (0);
}