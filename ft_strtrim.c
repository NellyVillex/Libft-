/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:20:56 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/06/12 10:38:40 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	lens1;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	lens1 = ft_strlen(s1);
	while (lens1 && ft_strchr(set, s1[lens1 - 1]))
		lens1--;
	result = malloc(sizeof(char) * (lens1 + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, lens1 + 1);
	return (result);
}
