/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:02:26 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/30 09:24:27 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*box;

	box = (t_list *)malloc(sizeof(t_list));
	if (!box)
	{
		return (NULL);
	}
	box->content = content;
	box->next = NULL;
	return (box);
}
