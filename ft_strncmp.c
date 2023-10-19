/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:56:43 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/16 16:18:27 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	i = 0;
	if (n == 0)
		return (0);
	while (n > 0 && (*s1 || *s2) && i < n - 1 && *s1 == *s2)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
