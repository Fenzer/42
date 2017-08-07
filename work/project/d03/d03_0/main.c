/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 22:37:23 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/07 16:40:14 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/**
 ** Function 0 : "ft_putnbr" 
 **/

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

/**
 ** Function 0 : "ft_putchar" 
 **/

void	ft_putchar(char c)
{
	write(1, &c,1);
}

/**
 ** Function 1 : "ft_ft" : take a pointer of int in param and give the int the value 42 
 **
 **/

void	ft_ft(int *nbr)
{
	int		a;

	a = 42;
	*nbr = a;
}

/**
 ** Function 2 :  "ft_ultimate_ft" : take pointer of pointer of pointer of pointer
 ** 			 of pointer of pointer of pointer of pointer of pointer of pointer of
 ** 			 int  in param and give the int the value 42 
 **
 **/

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/**
 ** Function 3 : "ft_div_mod" : This function take 4 param, two int to be divide and
 **				two pointer of int which will stock the value of the div and the rest. 
 **/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
