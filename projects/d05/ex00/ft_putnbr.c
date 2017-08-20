/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 15:03:56 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/20 15:30:02 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb)
{
	unsigned int	n;
	int				div;
	int				dig;

	n = nb;
	div = 1;
	dig = 10;
	if (nb < 0)
	{
		n = -nb;
		ft_putchar('-');
	}
	while (n > 10)
	{
		dig = n / div;
		if (dig <= 9 && dig >= 0)
		{
			ft_putchar(dig + '0');
			n = n % div;
			div = 1;
		}
		div *= 10;
	}
	if (n < 10)
		ft_putchar(n + '0');
}
