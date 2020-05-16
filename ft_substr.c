/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 00:32:35 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/14 23:40:57 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	n;

	n = 0;
	if (len == 0 || *s == 0 || ((start + 1) > ft_strlen(s)))
		return ("");
	if (ft_strlen(s) - (start + 1) >= len)
	{
		if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
			return (NULL);
	}
	if (!(str = (char*)malloc(sizeof(char) * (ft_strlen(s) - start))) &&
				!(ft_strlen(s) - (start + 1) >= len))
		return (NULL);
	while (*(s + start) != 0 && len != 0)
	{
		len--;
		*str = *(s + start);
		str++;
		s++;
		n++;
	}
	*str = '\0';
	return (str - n);
}
