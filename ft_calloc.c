/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:44:03 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/17 11:08:53 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	max_size_t;

	// if (!nmemb || !size)
	// {
	// 	arr = malloc(1);
	// 	if (!arr)
	// 	{
	// 		return (NULL);
	// 	}
	// 	arr[0] = 0;
	// 	return (arr);
	// }
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
int	main(void)
{
	size_t n = 5;
	int *num = ft_calloc(3, 0);

	int i = 0;
	while (n > i)
	{
		printf("%c", num[i]);
		i++;
	}
	free(num);
	num = NULL;
}