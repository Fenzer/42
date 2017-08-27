/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:21:13 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/15 16:26:46 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		r;
	int		tp;

	r = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (nb >= 0)
	{
		if (nb == 0)
			tp = 1;
		else
			tp = nb;
		r *= tp;
		nb--;
	}
	return (r);
}

