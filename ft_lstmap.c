/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:03:24 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/06/12 10:34:58 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_list	*clear_null(t_list *list, void (*del)(void *))
{
	ft_lstclear(&list, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*r;
	t_list	*t;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	r = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (clear_null(r, del));
		t = ft_lstnew(content);
		if (!t)
			return (clear_null(r, del));
		ft_lstadd_back(&r, t);
		lst = lst->next;
	}
	return (r);
}
