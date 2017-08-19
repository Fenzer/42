/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 22:37:23 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/10 23:10:33 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/**
 ** Function 00 : "ft_putnbr" 
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


/**
 ** Function 4 : "ft_ultimate_div_mod" : This function take 2 param, two pointer of int
 **				 to be divided and stock the value of the div and the rest. 
 **/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		result;
	int		rest;

	result = *a / *b;
	rest = *a % *b;
	*a = result;
	*b = rest;
}

/**
 ** Function 5 : "ft_putstr" : print the chain of character passed in argument
 **/

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

/**
 ** Function 6 : "ft_strlen" :  return the number of characters passed in argument.
 **/

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return i;
}


/**
 ** Function 7 : "ft_swap" :  swap an integer with the other ome passed in arg;
 **/

void	ft_swap(int *a, int *b)
{
	int		tp;

	tp = *a;
	*a = *b;
	*b = tp;
}


/**
 ** Function 8 : "ft_strrev" : reverse the string passed in argument.
 **/

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tp;
	char	tp_str[ft_strlen(str)];

	i = ft_strlen(str) - 1;
	j = 0;
	tp = 0;
	while(j <= (ft_strlen(str) - 1))
	{
		tp = str[i];
		str[i] = tp_str[j];
		tp_str[j] = tp;
		j++;
		i--;
	}

	return str;
}

