/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:41:59 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/16 16:13:04 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int size = ft_strlen(s) + 1;
	while (size >= 0)
	{
		if (s[size] == c)
			return ((char *)s + size);
		size--;
	}
	return ((void *)0);
}