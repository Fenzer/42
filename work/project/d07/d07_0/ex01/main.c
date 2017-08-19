/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 21:07:58 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/17 22:54:26 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		n;
	int		i;
	int		rng;
	int		*ptr;

	n = min;
	i = 0;
	rng = max - min;
	ptr = (int *) malloc(sizeof(int) * rng);
	while (i <= rng)
	{
		ptr[i] = n;
		i++;
		n++;
	}
	ptr[i] = 0;
	return (ptr);
}
