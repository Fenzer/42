/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 15:27:39 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/06 21:36:18 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int nbr[3];

	nbr[0] = 48;
	nbr[1] = 48;
	nbr[2] = 48;
	while (nbr[0] <= 55)
	{
		nbr[1] = nbr[0] + 1;
		while (nbr[1] <= 56)
		{
			nbr[2] = nbr[1] + 1;
			while (nbr[2] <= 57)
			{
				if (nbr[0] < nbr[1] && nbr[1] < nbr[2])
				{
					ft_comb_printr(nbr[0], nbr[1], nbr[2]);
				}
				nbr[2]++;
			}
			nbr[1]++;
		}
		nbr[0]++;
	}
}

void	ft_comb_printr(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7')
	{
		ft_putchar(' ');
		ft_putchar(',');
	}
}
