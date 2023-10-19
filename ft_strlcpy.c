/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:03:24 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/17 03:51:17 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t src_length ;
	src_length = 0;
	
	while (src[src_length] != '\0')
    	src_length++;
	if (dstsize == 0)
	{
		return (src_length);
	}

    size_t i;

	i = 0;
    // Copy characters from src to dest up to size - 1 characters or until null terminator
    while (i < dstsize - 1 && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    // Null-terminate the destination string
    dest[i] = '\0';

    // Calculate the length of the source string
    return src_length;
}
