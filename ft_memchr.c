/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 22:57:43 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/16 12:40:26 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char*)s;
	while (n--)
	{
		if (*p != (unsigned char)c)
			++p;
		else
			return ((void*)p);
	}
	return (NULL);
}
