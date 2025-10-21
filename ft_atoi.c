/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:48:31 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/20 03:48:15 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	is_overflow(int sign)
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

long	ft_my(const char *nptr, int sign)
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
	return (res);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	long	sing;
	long	rest;

	sing = 1;
	i = 0;
	rest = 0;
	if (!nptr)
	{
		return (0);
	}
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
	{
		i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			sing *= -1;
		}
		i++;
	}
	rest = ft_my(&nptr[i], sing);
	return (sing * rest);
}