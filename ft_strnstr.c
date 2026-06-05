/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 14:28:00 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/05/27 16:57:59 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = strlen(little);
	if (!j)
		return ((char *) big);
	while (big[i] && i + j <= len)
	{
		if (!ft_strncmp(&big[i], little, j))
			return ((char *) &big[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*big;
// 	char	*little;
// 	char	*result;

// 	big = "Ola mundo";
// 	little = "mun";

// 	result = ft_strnstr(big, little, 9);

// 	if (result)
// 		printf("Encontrou: %s\n", result);
// 	else
// 		printf("Nao encontrou\n");

// 	return (0);
// }