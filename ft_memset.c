/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:52:19 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/05/27 15:13:15 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tpm;

	tpm = (unsigned char *) s;
	while (n > 0)
	{
		*(tpm++) = (unsigned char) c;
		n--;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str[20];

// 	ft_memset(str, 'A', 5);
// 	str[5] = '\0';

// 	printf("%s\n", str);
// 	return (0);
// }