/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 14:51:07 by lboulin           #+#    #+#             */
/*   Updated: 2017/08/20 09:21:36 by mabreu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

void	start(int x, int y);
void	mid(int x, int y);
void	end(int x, int y);
void	rush(int x, int y);
int		main(void);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
	}
	else
	{
		start(x, y);
	}
}

void	start(int x, int y)
{
	int i;

	i = 2;
	ft_putchar('/');
	while (i < x)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
		ft_putchar('\\');
	if (y > 2)
	{
		ft_putchar('\n');
		mid(x, y);
	}
	if (y == 2)
	{
		ft_putchar('\n');
		end(x, y);
	}
	if (y == 1)
		ft_putchar('\n');
}

void	mid(int x, int y)
{
	int i;
	int n;

	i = 2;
	n = 2;
	while (n < y)
	{
		ft_putchar('*');
		while (i < x && x > 1)
		{
			ft_putchar(' ');
			i++;
		}
		i = 2;
		if (x > 1)
			ft_putchar('*');
		ft_putchar('\n');
		n++;
	}
	end(x, y);
}

void	end(int x, int y)
{
	int i;

	i = 2;
	if (y > 1)
	{
		ft_putchar('\\');
	}
	while (i < x)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('/');
	}
	if (y > 1)
	{
		ft_putchar('\n');
	}
}
