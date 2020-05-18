/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 22:07:20 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/18 13:33:12 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t num, size_t size)
{
	void	*mem;

	if (num == 0 || size == 0)
		return (NULL);
	mem = (void*)malloc(num * size);
	if (mem == 0)
		return (mem);
	ft_memset(mem, 0, num * size);
	return (mem);
}
