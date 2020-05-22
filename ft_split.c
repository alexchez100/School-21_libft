/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 23:53:47 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/23 00:29:05 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ff_clean(char **res, int i)
{
	while (i)
	{
		free(*res--);
		i--;
	}
}

static int	ff_numeric(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		while (*s && *s != c)
			s++;
		words++;
	}
	return (words);
}

static int	word_division(char **res, char const *s, char c)
{
	char	*st;
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		st = (char*)s;
		while (*s && *s != c)
			s++;
		i++;
		if (!(*res = ft_substr(st, 0, s - st)) || i == 3)
		{
			ff_clean(res, i);
			return (0);
		}
		res++;
	}
	*res = NULL;
	return (1);
}

char		**ft_split(char const *s, char c)
{
	size_t	n;
	char	**res;

	if (!s)
		return (NULL);
	n = ff_numeric(s, c);
	if (!(res = (char**)malloc(sizeof(char*) * (n + 1))))
		return (NULL);
	if (!word_division(res, s, c))
	{
		free(res);
		return (NULL);
	}
	return (res);
}
