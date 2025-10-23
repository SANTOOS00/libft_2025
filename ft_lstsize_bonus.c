#include "libft.h"

int ft_lstsize(t_list **head)
{
    int a = 0;

    while (*head)
    {
        a++;
        *head = (*head)->next;
    }
    return (a);
}

int main()
{
    t_list a;
    t_list b;
    t_list c;
    t_list d;
    t_list x;

    t_list *head = &a;
    a.content = ft_strdup("a");
    a.next = &b;
    b.content = ft_strdup("b");
    b.next = &c;
    c.content = ft_strdup("c");
    c.next = &d;
    d.content = ft_strdup("d");
    d.next = NULL;
    
    printf("%p\n", head);
    printf("%d\n", ft_lstsize(&head));
    printf("%p\n", head);
}