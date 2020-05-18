/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 20:05:59 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/18 13:27:41 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		nb;
	int		flag;

	nb = 0;
	flag = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if ((*str == '+' || *str == '-'))
		flag = (*str++) == '-' ? -1 : 1;
	while (*str == '0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + flag * ((*str++) - '0');
		if (((nb > 0) && (flag < 0)) || ((nb < 0) && (flag > 0)))
			return ((1 + flag) / 2 * (-1));
	}
	return ((int)nb);
}
