/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:52:19 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/06/12 10:36:39 by dnelly-b         ###   ########.fr       */
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
