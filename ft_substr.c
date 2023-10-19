/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:37:06 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/18 02:58:20 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t i;

	i = 0;
    char *str = malloc(sizeof(char) * (len + 1));
    if (str == NULL)
	{
        return NULL;
    }

    while (len > 0)  
    {
        str[i] = s[start + i];
        i++;
        len--;
    }
    str[i] = '\0';
    return str;
}
