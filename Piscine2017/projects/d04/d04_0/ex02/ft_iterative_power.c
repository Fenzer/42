/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:50:07 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/15 20:49:32 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		res;

	if (power < 0)
		return (0);
	while (power > 0)
	{
		res = nb * nb;
		power--;
	}
	return (res);
}
