/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 12:07:51 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/09 12:09:06 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int i;
	int tp;
	
	i = 1000000000;
	while (i >= 10)
	{
		tp = nb / i;
		if (tp != 0)
		{
			ft_putchar(tp + '0');
			nb = nb - (tp * i);
			return ft_putnbr(nb);
		}
		i = i / 10;
	}
	ft_putchar(nb + '0');
}
