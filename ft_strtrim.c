/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 00:29:22 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/16 13:12:22 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_cpy_dop(char *new, char const *s1, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (end - start + 1)
	{
		new[i] = *(s1 + start);
		s1++;
		i++;
		end--;
	}
	new[i] = 0;
	return (new);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new;

	start = 0;
	if ((set == 0) || (s1 == 0) || (*s1 == 0))
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	if (end)
		while (s1[end] && ft_strchr(set, s1[end]) && end)
			end--;
	if (!end)
		return (NULL);
	if (!(new = (char*)malloc(sizeof(*new) * (end - start) + 1)))
		return (NULL);
	return (ft_cpy_dop(new, s1, start, end));
}
