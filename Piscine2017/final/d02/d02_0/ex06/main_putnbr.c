/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:04:50 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/08 12:50:54 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);
/*
int		ft_checker(int nb);

void	ft_putnbr(int nb)
{
	int	a;
	int	i;
	int	t[10];

	a = 0;
	i = 0;
	if (ft_checker(nb) == 0)
		nb = -nb;
	if (nb > 10)
	{
		while (nb % 10 != 0)
		{
			a = nb % 10;
			nb = (nb - a) / 10;
			t[i] = a + 48;
			i++;
		}
		while (i >= 0)
		{
			ft_putchar(t[i]);
			i--;
		}
	}
}

int		ft_checker(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		return 0;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return 1;
	}

	return 2;
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	int 	a;
	int		i;
	int		t[10];

	a = 0;
	i = 0;
	if (n < 0)
	{
		n = - n;
		ft_putchar('-');
	}
	if (n < 10)
		ft_putchar(n +48);
	else
	{
		while (n % 10 != 0)
		{
			a = n % 10;
			n = (n - a) / 10;
			t[i] = a + 48;
			i++;
		}
		while (i >= 0)
		{
			ft_putchar(t[i]);
			i--;
		}
	}
}

int		main(void)
{
	char	c;

	c = ' ';
	ft_putnbr(28);
	write(1, &c, 1);
	ft_putnbr(-1846834509);
	write(1, &c, 1);
	ft_putnbr(5);
	write(1, &c, 1);
	ft_putnbr(30);
}
