/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 16:40:33 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/05/27 15:43:18 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i != 0 && s[i] != (char)c)
		i--;
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*result;

// 	str = "banana";

// 	result = ft_strrchr(str, 'a');

// 	if (result)
// 		printf("Encontrou: %s\n", result);
// 	else
// 		printf("Nao encontrou\n");

// 	return (0);
// }