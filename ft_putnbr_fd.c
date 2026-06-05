/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnelly-b <dnelly-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 12:24:37 by dnelly-b          #+#    #+#             */
/*   Updated: 2026/06/03 14:47:37 by dnelly-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}

// int	main(void)
// {
// 	ft_putnbr_fd(42, 1);
// 	write(1, "\n", 1);

// 	ft_putnbr_fd(-42, 1);
// 	write(1, "\n", 1);

// 	ft_putnbr_fd(0, 1);
// 	write(1, "\n", 1);

// 	ft_putnbr_fd(123456, 1);
// 	write(1, "\n", 1);

// 	ft_putnbr_fd(-2147483648, 1);
// 	write(1, "\n", 1);

// 	ft_putnbr_fd(2147483647, 1);
// 	write(1, "\n", 1);

// 	return (0);
// }