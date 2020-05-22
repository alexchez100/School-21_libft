/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 18:07:02 by gsansa            #+#    #+#             */
/*   Updated: 2020/05/23 01:18:13 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;

	if (!f || !del)
		return (NULL);
	a = NULL;
	while (lst)
	{
		if (ft_lstnew(f(lst->content)) == NULL)
		{
			ft_lstclear(&a, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&a, (ft_lstnew(f(lst->content))));
		lst = lst->next;
	}
	return (a);
}
