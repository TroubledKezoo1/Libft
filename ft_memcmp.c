/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:26:52 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/16 16:30:35 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr = (unsigned char *)s1;
	unsigned char	*s2_ptr = (unsigned char *)s2;
	size_t	i;
	
	i = 0;
	if (n == 0)
		return (0);
	while (n > 0 && (*s1_ptr || *s2_ptr) && i < n - 1 && *s1_ptr == *s2_ptr)
		i++;
	return ((unsigned char)s1_ptr[i] - (unsigned char)s2_ptr[i]);
}