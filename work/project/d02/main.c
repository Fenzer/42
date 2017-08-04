/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 16:07:23 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/04 15:36:41 by fpinson          ###   ########.fr       */
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
	if (a != '7')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}
}

/** Function 6 : ft_print_comb2 : print all combination of 2 digit numbers **/

void	ft_print_comb2(void)
{
	int	a;
	int b;
	int c;

	a=0;
	c=0;
	while (a <= 9)
	{	
		b = a - c;
		while (b <= 9)
		{
			if (a == 9 && b == 9)
			{
				ft_putchar(a + 48);
				ft_putchar(b + 48);
			}
			else 
			{
				ft_putchar(a + 48);
				ft_putchar(b + 48);
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		c++;
		a++;
	}
}
