/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 00:40:53 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/14 00:40:54 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch + ('a' - 'A'));
	return (ch);
}
