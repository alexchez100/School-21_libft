/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 00:12:56 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/14 22:07:44 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (size != 0)
	{
		while ((--size != 0) && (*s != '\0'))
		{
			*d++ = *s++;
		}
		*d = '\0';
	}
	while (*s)
		s++;
	return (size_t)(s - src);
}
