/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 15:24:32 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/05/27 15:13:01 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if ((char)c == *s)
		return ((char *)s);
	return (0);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*result;

// 	str = "abcdef";

// 	result = ft_strchr(str, 'd');

// 	if (result)
// 		printf("Encontrou: %s\n", result);
// 	else
// 		printf("Nao encontrou\n");

// 	return (0);
// }