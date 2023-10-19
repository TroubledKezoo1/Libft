/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 06:26:25 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/18 10:53:51 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char *ft_strjoin(char const *s1, char const *s2)
{
	char *ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ptr == NULL)
	{
		return NULL;
	}
	ft_strlcat(ptr, (char *)s1, ft_strlen((const char *)s1) + 1);
	ft_strlcat((ptr + ft_strlen(s1)), (char *)s2, (ft_strlen((const char *)s1) + ft_strlen((const char*)s2) + 1 ));
	return (ptr);	
}