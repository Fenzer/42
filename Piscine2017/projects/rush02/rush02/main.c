/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabreu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 13:18:26 by mabreu            #+#    #+#             */
/*   Updated: 2017/08/20 09:20:35 by mabreu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

void	ft_putchar(char c);
void	rush(int x, int y);
void	startend(int x);
void	mid(int x, int y);

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	rush(ft_atoi(argv[1]), (ft_atoi(argv[2])));
	return (0);
}
