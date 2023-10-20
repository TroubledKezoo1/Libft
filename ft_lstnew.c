/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 04:43:50 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/20 04:43:50 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
void *content;
struct s_list *next;
}t_list;

#include<stdio.h>
#include<stdlib.h>
t_list *ft_lstnew(void *content)
{
    t_list *new;
    new = (t_list *)malloc(sizeof(t_list));
    if (new == NULL)
        return (NULL);
    new->content = content;
    t_list *next = NULL;
    new->next = next;
    return (new);
}

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst == NULL || new == NULL)
        return;
    new->next = *lst;
    *lst = new;
}
int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    t_list *current = lst;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return (count);
}
t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (NULL);
    while (lst->next != NULL)       
        lst = lst->next;
    return (lst);
}
void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (*lst == NULL)
        *lst = new;
    else
        ft_lstlast(*lst)->next = new;
}
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
void del(void *content)
{
    ft_bzero();
}
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst == NULL || del == NULL)
    {
        return;
    }
    del(lst->content);
    free(lst);  
}
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
	*lst = NULL;
}


#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
    t_list *liste = NULL;

    for (size_t i = 65; i < 70; i++)
    {
        ft_lstadd_front(&liste, ft_lstnew((void *)i));
    }
    printf("size = %d\n", ft_lstsize(liste));
    printf("last = %d\n", ft_lstlast(liste)->content);
}

