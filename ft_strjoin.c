/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 00:08:47 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/16 12:28:37 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new;
	char	*new2;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s2) + ft_strlen(s1);
	if (!(new = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	new2 = new;
	while (len-- && *s1)
		*new++ = *s1++;
	len++;
	while (len-- && *s2)
		*new++ = *s2++;
	*new = '\0';
	return (new2);
}
