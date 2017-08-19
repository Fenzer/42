/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 21:07:58 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/17 22:51:32 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (min >= max)
		ptr = (int *)malloc(sizeof(int) * rng);
	else
	{
		ptr = NULL;
		return (ptr);
	}
	while (i <= rng)
	{
		ptr[i] = n;
		i++;
		n++;
	}
	ptr[i] = 0;
	return (ptr);
}
