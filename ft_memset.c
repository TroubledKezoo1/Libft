/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:21:34 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/16 14:27:53 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr = (unsigned char *)b;
	while (len--)
	{	
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (b);
}
