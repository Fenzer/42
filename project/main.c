/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:11:58 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/11 17:01:00 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}



int		ft_atoi(char *str)
{	
	int		nbr;
	int		sign;
	int		i;

	i = 0 ;
	sign = 1;
	while ((str[i] <= 32 && str[i] >= 0) && str[i] != '\0')
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = (nbr*10)+(str[i] - 48);
		i++;
	}
	return (nbr * sign);	
}		

void	ft_putnbr(int	nb)
{
	unsigned int	n;
	int				r;
	int				i;

	r = 0;
	n = nb;
	i = 1;
	if (nb < 0)
	{
		n = -nb;
		ft_putchar('-');
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb);
	while (n / i != 0)
	{
		r = n / i;
		if (0 <= r && r <= 9)
		{
			ft_putchar(r + '0');
			n = n - (r * i); 
			i = 1;
		}
		i *= 10;
	}
	return;
}

int		ft_str(char *dest, char *src )
{
	int		i;

	i = 0;
	while (src[i] == '\0')
	{
		dest[i] = src[i];
		i++;
	}
}
int		ft_strnccpy(char *dest, char *src, int n)
{
	int		i;

	i = 0;
	while (src[i] == '\0' && i <= n)
	{
		dest[i] = src[i];
		i++;
	}
}

int		main(int argc, char **argv)
{
	char str[];

	if (argc)
		ft_putstr(argv[1]);
	ft_putnbr(ft_atoi(argv[2]));
	
	return (0);
}

