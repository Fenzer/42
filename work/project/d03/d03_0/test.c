/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 22:40:47 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/07 22:41:26 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "main.c"

int		main(void)
{
	/* "ft_ultimate_ft" 
	int		i;
	int		*********ippppppppp;
	int		********ipppppppp;
	int		*******ippppppp;
	int		******ippppp;
	int		*****ippppp;
	int		****ipppp;
	int 	***ippp;
	int		**ipp;
	int		*ip;

	i = 0;
	ip = &i;
	ipp = &ip;
	ippp = &ipp;
	ipppp = &ippp;
	ippppp = &ipppp;
	ipppppp = &ippppp;
	ippppppp = &ipppppp;
	ipppppppp = &ippppppp;
	ippppppppp = &ipppppppp;
	ft_ultimate_ft(ipp);
	ft_putchar(*********ippppppp);
	*/
	/*
	// "ft_div_mod" && "ft_ultimate_div_mod
	int		a;
	int		b;
	int		result;
	int		rest;
	int		*div;
	int		*mod;
	int		*c;
	int		*d;

	a = 672;
   	b = 92;
	c = &a;
	d = &b;
	result = 0;
	rest = 0;
	div = &result;
	mod = &rest;	
	ft_div_mod(a,b,div,mod);
	//ft_putnbr(result);
	ft_putnbr(*div);
	ft_putchar(' ');
	ft_putnbr(rest);
	//ft_putchar(*mod);
	ft_putchar(' ');
	ft_ultimate_div_mod(c,d);
	ft_putnbr(*c);
	ft_putchar(' ');
	ft_putnbr(*d);*/
	

/*	
	// "ft_putstr"
	char	*str;

	str = "Hello World!";
	ft_putstr(str);

	// "ft_strlen"

	ft_putnbr(ft_strlen(str));

*/

	// "ft_swap"
	int		a;
	int		b;
	int		*ip1;
	int		*ip2;

	a = 1;
	b = 0;
	ip1 = &a;
	ip2 = &b;
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_swap(ip1, ip2);
	ft_putchar(a + '0');
	ft_putchar(b + '0');

	// "ft_strrev"
	char	*str;
	
	str = "WTF";
	ft_putstr(str);
	ft_strrev(str);
	ft_putstr(str);

	return 0;
}
