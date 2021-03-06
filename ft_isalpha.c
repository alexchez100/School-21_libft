/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 22:22:48 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/13 22:22:49 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		ft_isalpha(int ch)
{
	if (ch > 64 && ch < 91)
		return (1);
	if (ch > 96 && ch < 123)
		return (2);
	return (0);
}
