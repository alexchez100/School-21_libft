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
		ft_lstadd_back(&a, (ft_lstnew(f(lst->content))));
		lst = lst->next;
	}
	return (a);
}
