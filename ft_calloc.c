/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:44:03 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/24 19:59:59 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	max_size_t;

	if (!nmemb || !size)
	{
		arr = malloc(1);
		if (!arr)
		{
			return (NULL);
		}
		return (arr);
	}
	max_size_t = -1;
	if (size != 0 && nmemb > max_size_t / size)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (!arr)
	{
		return (NULL);
	}
	ft_bzero(arr, (nmemb * size));
	return (arr);
}
