/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:12:07 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/05/29 17:20:18 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	(void)ft_strlcpy(result, s1, len1 + len2 + 1);
	(void)ft_strlcat(result, s2, len1 + len2 + 1);
	return (result);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*result;

// 	s1 = "Hello ";
// 	s2 = "World";

// 	result = ft_strjoin(s1, s2);

// 	if (!result)
// 		return (1);

// 	printf("Resultado: %s\n", result);

// 	free(result);

// 	return (0);
// }