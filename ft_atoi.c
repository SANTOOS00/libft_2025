/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:29:25 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/30 09:44:16 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_overflow(int sign)
{
	if (sign == 1)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}

static long	ft_convert_number(const char *nptr, int sign)
{
	int		i;
	long	res;

	i = 0;
	res = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (res > (LONG_MAX - (nptr[i] - '0')) / 10)
		{
			return (is_overflow(sign));
		}
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	long	sing;
	long	rest;

	sing = 1;
	i = 0;
	rest = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
	{
		i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			sing = sing * -1;
		}
		i++;
	}
	rest = ft_convert_number(&nptr[i], sing);
	return ((int)rest);
}
