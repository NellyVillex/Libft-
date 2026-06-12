/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 14:28:00 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/06/12 10:47:38 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(little);
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
