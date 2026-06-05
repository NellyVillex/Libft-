/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:36:54 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/06/03 16:17:41 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*node1;
// 	t_list	*node2;

// 	node1 = ft_lstnew("Ana");
// 	node2 = ft_lstnew("Carlos");

// 	lst = node1;

// 	printf("Antes:\n");
// 	printf("%s\n", (char *)lst->content);

// 	ft_lstadd_front(&lst, node2);

// 	printf("\nDepois:\n");
// 	printf("%s\n", (char *)lst->content);
// 	printf("%s\n", (char *)lst->next->content);

// 	free(node1);
// 	free(node2);
// 	return (0);
// }