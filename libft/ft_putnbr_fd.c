/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhafdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:00:26 by mhafdi            #+#    #+#             */
/*   Updated: 2021/11/11 22:00:00 by mhafdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	a;

	a = n;
	if (a < 0)
	{
		a = a * -1;
		ft_putchar_fd('-', fd);
	}
	if (a >= 10)
	{
		ft_putnbr_fd(a / 10, fd);
		ft_putnbr_fd(a % 10, fd);
	}
	else
	{
		ft_putchar_fd(a + '0', fd);
	}
}

/*int	main(void)
{
	ft_putnbr_fd(150, 1);
	return (0);
}*/
