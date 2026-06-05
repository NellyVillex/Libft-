/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:03:24 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/06/05 11:06:58 by dnelly-b         ###   ########.fr       */
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

// void	*to_upper(void *content)
// {
// 	char	*str;
// 	char	*copy;
// 	int		i;

// 	str = (char *)content;
// 	copy = ft_strdup(str);
// 	if (!copy)
// 		return (NULL);
// 	i = 0;
// 	while (copy[i])
// 	{
// 		if (copy[i] >= 'a' && copy[i] <= 'z')
// 			copy[i] -= 32;
// 		i++;
// 	}
// 	return (copy);
// }

// void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new_lst;

// 	lst = ft_lstnew(ft_strdup("ana"));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("bob")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("carlos")));

// 	printf("Lista original:\n");
// 	ft_lstiter(lst, print_content);

// 	new_lst = ft_lstmap(lst, to_upper, free);

// 	printf("\nNova lista:\n");
// 	ft_lstiter(new_lst, print_content);

// 	ft_lstclear(&lst, free);
// 	ft_lstclear(&new_lst, free);

// 	return (0);
// }