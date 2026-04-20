/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:22:37 by andede-s          #+#    #+#             */
/*   Updated: 2026/02/10 14:45:29 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = (str[i] + 32);
		}
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (str[i] - 32);
		}
		if ((!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9'))
				&& (str[i] >= 'a' && str[i] <= 'z')))
		{
			str[i] = (str[i] - 32);
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char	str[] =  "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(str);

	printf("%s", str);
	return (0);
}*/
