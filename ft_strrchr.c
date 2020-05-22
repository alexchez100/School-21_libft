/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 00:25:00 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/22 22:44:15 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int ch)
{
	char	*s;

	s = (char*)NULL;
	while (*str)
	{
		if (*str == (char)ch)
			s = (char*)str;
		str++;
	}
	if (*str == (char)ch)
		return ((char*)str);
	return (s);
}
