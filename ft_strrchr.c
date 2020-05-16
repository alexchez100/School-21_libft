/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 00:25:00 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/14 22:17:53 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int ch)
{
	char	*s;

	s = 0;
	if (*str == ch)
		return ((char*)str);
	while (*str)
	{
		str++;
		if (*str == (char)ch)
			s = (char*)str;
	}
	if (*str == (char)ch)
		s = (char*)str;
	return (s);
}
