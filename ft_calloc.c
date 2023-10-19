/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 03:52:41 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/17 04:01:44 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
	void *ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}