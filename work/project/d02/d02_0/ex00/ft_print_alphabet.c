/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 13:52:53 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/03 15:08:43 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.h"

void	ft_print_alphabet(void);

int		main()
{
	ft_print_alphabet();
	return (0);
}

void	ft_print_alphabet(void)
{
	int a;
	a=97;
	while(a <= 122)
		ft_put_char(a);
		a++;
}
