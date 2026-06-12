/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:36:32 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/06/12 10:34:12 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*n;
	t_list	*t;

	if (!lst || !del)
		return ;
	n = *lst;
	while (n)
	{
		t = n->next;
		del(n->content);
		free(n);
		n = t;
	}
	*lst = NULL;
}
