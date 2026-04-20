/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:24:20 by andede-s          #+#    #+#             */
/*   Updated: 2026/02/10 10:24:07 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	max_dest;
	unsigned int	max_src;

	max_src = 0;
	max_dest = 0;
	while (dest[max_dest] && max_dest < size)
	{
		max_dest++;
	}
	while (src[max_src])
	{
		max_src++;
	}
	if (max_dest >= size)
		return (size + max_src);
	i = 0;
	while (src[i] && max_dest + i < size - 1)
	{
		dest[max_dest + i] = src[i];
		i++;
	}
	dest[max_dest + i] = '\0';
	return (max_dest + max_src);
}
