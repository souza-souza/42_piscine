/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:29:11 by andede-s          #+#    #+#             */
/*   Updated: 2026/02/10 12:28:52 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	size;

	size = 0;
	i = 0;

	while (base[size])
	{
		size++;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= size)
		nbr = nbr / size;

	write (1, &base[nbr % size], 1);
}
/*int	main()
{
	char base[] = "0123456789";
	
	ft_putnbr_base(4, base);
	return (0);
}*/
