/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabreu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 14:22:15 by mabreu            #+#    #+#             */
/*   Updated: 2017/08/20 09:21:48 by mabreu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

void	rush(int x, int y);
void	startend(int x);
void	mid(int x, int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
	}
	else
	{
		startend(x);
		ft_putchar('\n');
		if (y > 2)
		{
			mid(x, y);
		}
		if (y > 1)
		{
			startend(x);
			ft_putchar('\n');
		}
	}
}

void	startend(int x)
{
	int i;

	i = 2;
	ft_putchar('A');
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
}

void	mid(int x, int y)
{
	int i;
	int n;

	i = 2;
	n = 2;
	while (n < y)
	{
		ft_putchar('B');
		while (i < x && x > 1)
		{
			ft_putchar(' ');
			i++;
		}
		i = 2;
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		n++;
	}
}
