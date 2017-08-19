/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 22:46:46 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/18 15:18:27 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		rng;

	rng = max - min;
	if (rng > 0)
	{
		*range = (int *)malloc(sizeof(int) * rng);
	}
	else if (*range == NULL || rng <= 0 || range == NULL)
		return (0);
	i=0;
	while (i < rng)
	{
		*(*range + i) = min + i;
		i++;
	}
	return (i);
}

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;
	int				div;
	int				dig;

	div = 1;
	if (nb < 0)
	{
		n = -nb;
		ft_putchar('-');
	}
	else
		n = nb;
	while (n > 9)
	{
		dig = n / div;
		div *= 10;
		if (dig <= 9 && dig >= 0)
		{
			ft_putchar(dig + '0');
			n = n % (div / 10);
			div = 1;
		}
	}
	if (n < 10)
		ft_putchar(n + '0');
}

int		main(void)
{
	int		*range;
	int		i=0;
	int		len;
	char	ret = '\n';

	len = ft_ultimate_range(&range,140,150);
	ft_putnbr(len);
	ft_putchar(ret);
	while (i < len)
	{
		ft_putnbr(range[i]);
		ft_putchar(ret);
		i++;
	}

}
