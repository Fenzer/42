/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 13:29:28 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/08 14:07:49 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./main.h"

int		main(void)
{
	char	c;

	c = ' ';
	ft_print_alphabet();
	ft_putchar(c);
	ft_print_reverse_alphabet();
	ft_putchar(c);
	ft_is_negative(-52);
	ft_putchar(c);
	ft_print_numbers();
	ft_putchar(c);
	ft_print_comb();
	ft_putchar(c);
	ft_print_comb2();
}
