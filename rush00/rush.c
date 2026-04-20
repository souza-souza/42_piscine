/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:53:59 by andede-s          #+#    #+#             */
/*   Updated: 2026/01/31 17:46:27 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	put_char(char car)
{
	write(1, &car, 1);
}

void	rush(int x, int y)
{
	int countx = 0;
	int county = 0;
	int countz = 0;

	while (countx != x)
    	{
        	if (countx == 0 || countx == x + 1)
        	{
            		put_char('o');
            		countx++;
        	}
        	else
            		put_char('-');
            		countx++;
    	}
	while (county != y)
    	{
		if (county == 0 || county == y + 1)
                {
                        put_char('|');
			write(1, "\n", 1);
                        county++;
                }
                else
                        put_char(' ');
			write(1, "\n", 1);
                        county++;

    
    	}
	while (countz != x)
    	{
        	if (countz == 0 || countz == x + 1)
        	{
            		put_char('o');
            		countz++;
        	}
        	else
            		put_char('-');
            		countz++;
    	}
}

int	main(void)
{
	rush(5, 5);
	return (0);
}
