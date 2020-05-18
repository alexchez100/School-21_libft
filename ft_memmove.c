/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 23:07:04 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/17 23:14:35 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;

	dp = dest;
	sp = src;
	if (!dest && !src)
		return (NULL);
	if (dp < sp)
	{
		while (n-- > 0)
			*dp++ = *sp++;
	}
	else
	{
		dp += n;
		sp += n;
		while (n-- > 0)
			*--dp = *--sp;
	}
	return (dest);
}
