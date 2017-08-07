/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 16:07:23 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/07 16:40:19 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./main.h"

/* *
 * Function 1 ft_putchar : put the character passed in arg to STDOUTPUT
 * *
 * */

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

/* Function 2 ft_print_alphabet*/
void	ft_print_alphabet(void)
{
	int i;
		
	i = 97;
	while (i <= 122)
	{
		ft_putchar(i);
		i++;
	}
}

/* Function 3 ft_print_reverse_alphabet */

void	ft_print_reverse_alphabet(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		ft_putchar(i);
		i--;
	}
}

/* Function 4 ft_print_numbers */

void	ft_print_numbers(void)
{
	int		i;
	char	a;

	i = 0;
	while (i < 10)
	{
		a = '0' + i;
		ft_putchar(a);
		i++;
	}
}

/* Function 5 ft_is_negative */

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

/* Function 6 ft_print_comb */

void	ft_print_comb(void)
{
	int		 nbr[3];
	
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
		ft_putchar(',');
		ft_putchar(' ');
	}

}

/** Function 6 : ft_print_comb2 : print all combination of 2 digit numbers **/

void	ft_print_comb2(void)
{
	int		a;
	int 	b;

	a = -1;
	while (a++ <= 98)
	{	
		b = a +  1 ;
		while (b <= 99)
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
			b++;
		}
	}
}

/* Function 7 : ft_putnbr return the value of an int in STDOUT */

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
