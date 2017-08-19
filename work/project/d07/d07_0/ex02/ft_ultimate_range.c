/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 22:46:46 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/18 15:22:33 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		rng;

	rng = max - min;
	if (rng > 0)
	{
		*range = (int *)malloc(sizeof(int) * rng);
	}
	else if (*range == NULL || rng <= 0 || range == NULL)
		return (0);
	i=0;
	while (i < rng)
	{
		*(*range + i) = min + i;
		i++;
	}
	return (i);
}
