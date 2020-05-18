/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 23:53:47 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/18 14:18:47 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_len(char const *s, char c)
{
	int		n;

	n = 0;
	if (*s != c)
		n++;
	while (*(s + 1))
	{
		if (*s == c && *(s + 1) != c)
			n++;
		s++;
	}
	return (n);
}

int			*ft_begin(char const *s, char c)
{
	int		*begin;
	int		i;

	i = 0;
	begin = (int*)malloc(ft_len(s, c) * sizeof(int));
	if (s[0] != c)
	{
		*begin = 0;
		begin++;
	}
	while (s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
		{
			*begin = i + 1;
			begin++;
		}
		i++;
	}
	return (begin - ft_len(s, c));
}

int			*ft_end(char const *s, char c)
{
	int		*end;
	int		i;

	i = 0;
	end = (int*)malloc(ft_len(s, c) * sizeof(int));
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == 0))
		{
			*end = i + 1;
			end++;
		}
		i++;
	}
	return (end - ft_len(s, c));
}

void		ft_copy_eb(char *str, char const *s, int begin, int end)
{
	int		i;

	i = 0;
	while ((i + begin) != end)
	{
		str[i] = s[i + begin];
		i++;
	}
	str[i] = '\0';
}

char		**ft_split(char const *s, char c)
{
	int		i;
	char	**str;

	i = 0;
	if (s == 0 || *s == 0)
		return (NULL);
	if (!(str = (char**)malloc(sizeof(char*) * (ft_len(s, c) + 1))))
		return (NULL);
	while (i < ft_len(s, c))
	{
		if (!(*str = (char*)malloc(sizeof(char) * (ft_end(s, c)[i] -
					ft_begin(s, c)[i] + 1))))
			return (NULL);
		ft_copy_eb(*str, s, ft_begin(s, c)[i], ft_end(s, c)[i]);
		i++;
		str++;
	}
	*str = NULL;
	free(ft_end(s, c));
	free(ft_begin(s, c));
	return (str - ft_len(s, c));
}
