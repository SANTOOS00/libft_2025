/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:55:02 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/28 01:09:53 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*tmp;
	t_list	*new_box;
	t_list	*box_head;

	if (!lst || !del || !(lst))
		return (NULL);
	box_head = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		new_box = ft_lstnew(tmp);
		if (!new_box)
		{
			ft_lstclear(&box_head, del);
			return (NULL);
		}
		ft_lstadd_back(&box_head, new_box);
		lst = lst->next;
	}
	return (box_head);
}
