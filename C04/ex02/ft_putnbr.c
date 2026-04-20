/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 11:41:27 by andede-s          #+#    #+#             */
/*   Updated: 2026/02/10 13:44:14 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	num;
	long	i;
	char	str[120];

	num = nb;
	i = 0;
	if (nb < 0)
	{
		write (1, "-", 1);
		num = -num;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (num > 0)
	{
		str[i++] = (num % 10) + '0';
		num = num / 10;
	}
	while (i > 0)
	{
		write(1, &str[--i], 1);
	}
}
/*int	main()
{
	ft_putnbr(42);
	return (0);
}*/
