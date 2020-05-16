/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 00:23:19 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/14 22:42:29 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	i;

	i = 1;
	if (!(needle || *needle))
		return (char*)haystack;
	while (*haystack && i < len)
	{
		j = 0;
		while (needle[j] == haystack[j] && needle[j] && haystack[j] &&
					(j + i) < len)
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char*)haystack);
		haystack++;
		i++;
	}
	return (0);
}
