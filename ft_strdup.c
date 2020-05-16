/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 00:07:13 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/14 00:07:14 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	char	*new;

	new = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (new)
		ft_memcpy(new, str, ft_strlen(str) + 1);
	return (new);
}
