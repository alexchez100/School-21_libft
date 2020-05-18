/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 00:12:56 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/18 14:53:19 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*s;

	s = src;
	if (size != 0)
	{
		while (--size && *s)
			*dst++ = *s++;
		*dst = '\0';
	}
	while (*s)
		s++;
	return (s - src);
}
