/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 15:27:45 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/06/12 10:33:48 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizeint(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	numb;
	char	*str;
	int		i;

	numb = n;
	str = ft_calloc(ft_sizeint(numb) + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = ft_sizeint(numb) - 1;
	if (numb == 0)
		str[0] = '0';
	if (numb < 0)
	{
		str[0] = '-';
		numb = numb * -1;
	}
	while (numb != 0)
	{
		str[i] = (numb % 10) + '0';
		numb = numb / 10;
		i--;
	}
	return (str);
}
