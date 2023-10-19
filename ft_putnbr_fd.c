/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysarac <yunusemresarac@yaani.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:10:31 by ysarac            #+#    #+#             */
/*   Updated: 2023/10/18 23:11:36 by ysarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar('-' ,fd);
		ft_putchar('2',fd);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-', fd);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48 , fd);
	}
}
