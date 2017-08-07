/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 22:40:47 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/07 16:52:52 by fpinson          ###   ########.fr       */
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

	// "ft_div_mod"
	int		a;
	int		b;
	int		result;
	int		rest;
	int		*div;
	int		*mod;

	a = 672;
   	b = 92;
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

	return 0;
}
