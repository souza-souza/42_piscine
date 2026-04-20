/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:09:12 by andede-s          #+#    #+#             */
/*   Updated: 2026/02/03 11:23:36 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str [size]!= '\0')
	{	
		write(1, str, 1);
		size++;
		str++;
	}
	return (size);
}

int main(void)
{
	ft_strlen("Bom dia");
	return (0);
}