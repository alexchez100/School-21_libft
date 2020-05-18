/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 00:29:22 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/18 21:31:38 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_dop_set(char const *start_2, char const *set)
{
	while (*start_2 != *set && *set)
		set++;
	if (*start_2 == *set)
		return (1);
	return (0);
}

char		*ft_strtrim(char const *start, char const *set)
{
	char	*final;

	if (!start || !set)
		return (NULL);
	while (*start && ft_dop_set(start, set))
		start++;
	final = (char *)start;
	while (*final)
		final++;
	while ((final - start) != 0 && ft_dop_set(final, set))
		final--;
	return (ft_substr(start, 0, final + 1 - start));
}
