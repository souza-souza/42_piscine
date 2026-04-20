/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:03:55 by andede-s          #+#    #+#             */
/*   Updated: 2026/02/09 10:23:37 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	t;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			t = 0;
			while (str[i + t] == to_find[t])
			{
				if (to_find[t + 1] == '\0')
				{
					return (&str[i]);
				}
				t++;
			}
		}
		i++;
	}
	return (0);
}
