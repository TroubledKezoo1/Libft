/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:27:29 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/18 21:59:57 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_numlen(int n)
{
	int len;

	len = 0;
	if (n == 0)
	{
		return 1;
	}
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n)
	{
		n/=10;
		len++;
	}
	return len;
}

char *ft_itoa(int n)
{
	int len;

	len = ft_numlen(n);
	char *str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return NULL;
	}
	str[len] = '\0';
	if (n == 0)
		str[0] = '0'; 
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (len--)
	{
		str[len] = (n % 10) + '0';
		n/=10;
	}
	return str;
}
