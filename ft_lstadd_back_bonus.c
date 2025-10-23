#include "libft.h"

void ft_lstadd_back(t_list **head, t_list *new)
{
    t_list *tmp;
    t_list *prev;

    if (!head)
        return ;
    if (!*head)
    {
        *head = new;
        return;
    }
    tmp = *head;
    while (tmp)
    {
        prev = tmp;
        tmp = tmp->next;
    }
    prev->next = new;
}

void ft_print(t_list *head)
{
    while (head)
    {
        printf("node -> %s\n", head->content);
        head = head->next;
    }
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
    

    // x node
    x.content = ft_strdup("x");
    x.next = NULL;
    printf("----------\n");
    ft_print(head);
    printf("----------\n");
    ft_lstadd_back(&head, &x);
    ft_print(head);
}