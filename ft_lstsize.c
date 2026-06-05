/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:18:19 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/06/03 16:36:34 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	node1 = ft_lstnew("Ana");
// 	node2 = ft_lstnew("Bob");
// 	node3 = ft_lstnew("Carlos");

// 	node1->next = node2;
// 	node2->next = node3;

// 	lst = node1;

// 	printf("Tamanho da lista: %d\n", ft_lstsize(lst));

// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }