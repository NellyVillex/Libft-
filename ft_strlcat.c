/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:19:37 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/05/27 15:12:50 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

// int	main(void)
// {
// 	char	dst[20] = "Hello ";
// 	char	src[] = "World";
// 	size_t	result;

// 	result = ft_strlcat(dst, src, 20);

// 	printf("Resultado: %s\n", dst);
// 	printf("Tamanho retornado: %zu\n", result);

// 	return (0);
// }