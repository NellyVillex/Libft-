/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 18:11:49 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/05/27 15:13:59 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tpm;

	tpm = (char *)s;
	while (n > 0)
	{
		*(tpm++) = 0;
		n--;
	}
}

// int	main(void)
// {
// 	char	str[] = "abcdef";

// 	printf("Antes: %s\n", str);

// 	ft_bzero(str, 3);

// 	printf("Depois: %s\n", str);

// 	return (0);
// }