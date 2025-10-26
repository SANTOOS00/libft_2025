/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 02:30:24 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/26 04:25:56 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
/* ------------------------- دوال مساعدة ------------------------- */

static size_t	ft_strlen(const char *str)
{
	size_t	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;

	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static t_list	*ft_lstnew(void *content)
{
	t_list	*box;

	box = malloc(sizeof(t_list));
	if (!box)
		return (NULL);
	box->content = content;
	box->next = NULL;
	return (box);
}

/* ------------------------- دوال اللائحة ------------------------- */

static void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst); // ❗ ضروري نحذف العقدة من الذاكرة
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

/* ------------------------- دالة التجربة ------------------------- */

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *lst = ft_lstnew(ft_strdup("test1"));
	lst->next = ft_lstnew(ft_strdup("test2"));
	lst->next->next = ft_lstnew(ft_strdup("test3"));

	printf("Before clear: %s, %s, %s\n",
		(char *)lst->content,
		(char *)lst->next->content,
		(char *)lst->next->next->content);

	ft_lstclear(&lst, del);

	if (lst == NULL)
		printf("After clear: ✅ list cleared successfully\n");
	else
		printf("After clear: ❌ list not cleared\n");

	return (0);
}