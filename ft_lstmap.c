/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 18:07:02 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/23 11:50:23 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	t_list	*pop;

	if (!f || !del)
		return (NULL);
	a = NULL;
	while (lst)
	{
		pop = ft_lstnew(f(lst->content));
		if (pop == NULL)
		{
			ft_lstclear(&a, del);
			return (NULL);
		}
		ft_lstadd_back(&a, (pop));
		lst = lst->next;
	}
	return (a);
}
