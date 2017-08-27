/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 14:48:53 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/08 12:48:47 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a++ <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_printr(a, b);
			b++;
		}
	}
}

void	ft_printr(int a, int b)
{
	if (a < b)
	{
		ft_putchar((a / 10) + 48);
		ft_putchar((a % 10) + 48);
		ft_putchar(' ');
		ft_putchar((b / 10) + 48);
		ft_putchar((b % 10) + 48);
	}
	if (a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
