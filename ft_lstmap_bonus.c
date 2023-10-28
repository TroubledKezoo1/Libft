/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 07:47:49 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/28 06:26:51 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*begin;
	void	*content;

	if (lst == NULL || f == NULL)
		return (NULL);
	begin = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (content == NULL)
			ft_lstclear(&begin, del);
		if (content == NULL)
			return (NULL);
		newlist = ft_lstnew(content);
		if (newlist == NULL)
		{
			free(content);
			ft_lstclear(&begin, del);
			return (NULL);
		}
		ft_lstadd_back(&begin, newlist);
		lst = lst->next;
	}
	return (begin);
}
