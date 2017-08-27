/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabreu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 08:58:33 by mabreu            #+#    #+#             */
/*   Updated: 2017/08/20 10:49:33 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"
#define BUF_SIZE 10

char	read_stdin(void)
{
//	int i;
	int res;
	char buf[BUF_SIZE + 1];

//	i = 0;
	while ((res = read(0, buf, BUF_SIZE)))
	{
		buf[res] = '\0';
//		i++;
	}
//	i = BUF_SIZE;
	ft_putstr(buf);
//	ft_putnbr(i);
	return (*buf);
}



int	main()
{
	read_stdin();
	return 0;
}
