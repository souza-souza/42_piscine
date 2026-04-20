/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:28:52 by andede-s          #+#    #+#             */
/*   Updated: 2026/02/10 15:51:45 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	res;

	count = 0;
	res = 1;
	if (power < 0)
		return (0);
	while (count < power)
	{
		res *= nb;
		count++;
	}
	return (res);
}
/*int	main()
{
	printf("%d", ft_iterative_power(0, 0));
	return (0);
}*/
