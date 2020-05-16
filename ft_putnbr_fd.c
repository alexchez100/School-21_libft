/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 23:20:16 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/16 12:05:53 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;
	unsigned int	nbr2;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	nbr2 = nbr;
	nb = 1;
	while ((nbr /= 10) > 0)
	{
		nb = nb * 10;
	}
	while (nb != 0)
	{
		ft_putchar_fd((char)(nbr2 / nb + 48), fd);
		nbr2 = nbr2 % nb;
		nb = nb / 10;
	}
}
