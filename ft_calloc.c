/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:44:03 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/28 00:54:58 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	max_size;

	max_size = nmemb * size;
	if (nmemb != 0 && max_size / nmemb != size)
		return (NULL);
	arr = (void *)malloc(max_size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, max_size);
	return (arr);
}
