/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:29:43 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/23 17:24:09 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *box;
    box = malloc (sizeof(t_list));
    if (box == NULL)
    {
        return (NULL);
    }
    box->content = content;
    box->next = NULL;
    return (box);
}