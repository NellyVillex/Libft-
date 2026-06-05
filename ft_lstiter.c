/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:23:28 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/06/04 14:59:45 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = ft_lstnew(ft_strdup("Ana"));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Bob")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Carlos")));

// 	printf("Conteúdo da lista:\n");
// 	ft_lstiter(lst, print_content);

// 	ft_lstclear(&lst, free);
// 	return (0);
// }