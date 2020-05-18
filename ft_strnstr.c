/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 00:23:19 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/18 02:00:52 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	i;

	i = 0;
	if (!(*needle))
		return ((char*)haystack);
	while (*haystack && i < len)
	{
		j = 0;
		while (needle[j] == haystack[j] && needle[j] && (j + i) < len)
			j++;
		if (!(needle[j]))
			return ((char*)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
