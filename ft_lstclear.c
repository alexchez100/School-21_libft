/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 22:47:22 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/19 18:19:25 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*a;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		a = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = a;
	}
}
