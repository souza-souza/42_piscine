/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:52:38 by andede-s          #+#    #+#             */
/*   Updated: 2026/02/10 15:46:07 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	t;

	t = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while (t <= nb)
	{
		res *= t;
		t++;
	}
	return (res);
}

/*int	main()
{
	printf("%d", ft_iterative_factorial(7));
	return (0);
}*/
