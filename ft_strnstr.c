/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:36:23 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/17 03:51:31 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len = ft_strlen(needle);
    if (*needle == '\0')
        return (char *)haystack;

    while (*haystack != '\0' && len >= needle_len) {
        if (*haystack == *needle && ft_strncmp(haystack, needle, needle_len) == 0)
            return (char *)haystack;
        haystack++;
        len--;
    }
    return NULL; 
}
