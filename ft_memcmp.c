/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:26:52 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/24 23:40:07 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;
	size_t			i;

	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (n > 0 && (*s1_ptr || *s2_ptr) && i < n - 1 && *s1_ptr == *s2_ptr)
		i++;
	return ((unsigned char)s1_ptr[i] - (unsigned char)s2_ptr[i]);
}
