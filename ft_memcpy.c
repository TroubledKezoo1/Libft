/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:44:05 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/17 05:48:20 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d = (unsigned char *)dst;
	unsigned char	*s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
		
	if (dst == src)
		return (dst);
	
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}