/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:33:20 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/23 13:44:56 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}
char *ft_zero(void)
{
	char *str;

	str = malloc (2);
	if (!str)
	{
		return (NULL);
	}
	str[0] = '0';
	str[1] = '\0';
	return (str);
}
char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	i;

	i = n;
	len = ft_intlen(n);
	if (!n)
	{
		return (ft_zero());
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (i < 0)
	{
		str[0] = '-';
		i = -i;
	}
	while (i > 0)
	{
		str[--len] = (i % 10) + '0';
		i = i / 10;
	}
	return (str);
}