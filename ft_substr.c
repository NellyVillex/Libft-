/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 11:16:19 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/05/29 16:11:29 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;
	char	*result;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (size <= start)
		len = 0;
	if (size - start < len)
		len = size - start;
	result = (char *)ft_calloc(sizeof (char), len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*result;

// 	str = "Hello World";

// 	result = ft_substr(str, 6, 5);

// 	if (!result)
// 		return (1);

// 	printf("Substring: %s\n", result);

// 	free(result);

// 	return (0);
// }