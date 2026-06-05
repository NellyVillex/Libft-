/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:46:21 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/06/03 18:23:50 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*last;

// 	node1 = ft_lstnew("Ana");
// 	node2 = ft_lstnew("Bob");
// 	node3 = ft_lstnew("Carlos");

// 	node1->next = node2;
// 	node2->next = node3;

// 	last = ft_lstlast(node1);

// 	printf("Último nó: %s\n", (char *)last->content);

// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }