/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:47:00 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/24 18:56:48 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char *sr1;
	const unsigned char *sr2;
	size_t	i;

	i = 0;
	sr1 = (const unsigned char *)s1;
	sr2 = (const unsigned char *)s2;
	while (n > i && (sr1[i] || sr2[i]))
	{
		if (sr1[i] != sr2[i])
		{
			return (sr1[i] - sr2[i]);
		}
		i++;
	}
	return (0);
}


int main()
{
	printf("%d\n", ft_strncmp(NULL, "dsgsg", 0));
}