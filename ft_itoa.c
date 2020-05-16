/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 22:33:40 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/13 22:33:41 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_len_len(int n_n)
{
	int		len_len;

	len_len = 0;
	if (n_n == 0)
		return (1);
	while (n_n > 0)
	{
		n_n = n_n / 10;
		len_len++;
	}
	return (len_len);
}

char		*ft_itoa_dop(int n, int len, char *str)
{
	str[len] = '\0';
	if (n == 0)
		str[len - 1] = '0';
	else
	{
		while (n > 0)
		{
			str[len - 1] = n % 10 + '0';
			n = n / 10;
			len--;
		}
		if (len == 1)
			str[0] = '-';
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = 0;
	if (n == (-2147483648))
	{
		if (!(str = (char*)malloc(sizeof(char) * 12)))
			return (NULL);
		str = "-2147483648";
		return (str);
	}
	if (n < 0)
	{
		n = n * (-1);
		len++;
	}
	len += ft_len_len(n);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	return (ft_itoa_dop(n, len, str));
}
