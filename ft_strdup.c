/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 04:02:46 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/17 04:45:20 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strcpy(char *dest, char *src)
{
	size_t i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
	size_t len = ft_strlen(src);
	char *dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	dest = ft_strcpy(dest, src);
	return (dest);
}